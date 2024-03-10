#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <string>
#include "dec.h"
using namespace Pistache;
using namespace std;
void replace(std::string& input, const std::string& target, char replacement) {
    size_t pos = 0;
    while ((pos = input.find(target, pos)) != std::string::npos) {
        input.replace(pos, target.length(), 1, replacement);
        pos += 1; // Move to the next character after the replacement
    }
}
void AES(const Rest::Request& request, Http::ResponseWriter response){
    string plain_text = request.query().get("param1").value_or("");
    string ke = request.query().get("param2").value_or("");
    replace(plain_text,"%20",' ');
    replace(ke,"%20",' ');
    cout<<plain_text<<"\t"<<ke<<endl;
    cout<<plain_text.length()<<"\t"<<ke.length()<<endl;
    int l = 0;
   // cout<<"Enter The Plain Text : ";
   // getline(cin,plain_text);
   // while(plain_text.length()>16){              //Taking plan text input of 16 bytes.
        //   cout<<"Error Enter Again: ";
       //  plain_text.clear();
      //  cin.ignore();
     //  getline(cin,plain_text);
   // }
    if(plain_text.length()<=16)
    {
	    unsigned char state_array[4][4];         //Arranging plain text input in 2D State array.
	    for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		    state_array[j][i] = plain_text[l];
		    l++;
		}
	    }
	     /* for(int i=0;i<4;i++){             //Printing State array in hexadecimals.
		for(int j=0;j<4;j++){
		    cout<<hex<<static_cast<int>(state_array[i][j])<<" ";
		}
		cout<<endl;
	    }*/
	    key p;  
	    unsigned char ** kk = p.get_key_container()[0];                    //Creating key object.
	    if(ke.length()<=16)
	    {
	    	int z=0;
	    	for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
		    		kk[i][j] = ke[z];
		    		z++;
			}
	   	 }
		    //p.input_key();            //Function to take key as input.
		    p.new_key_exp();         //Function that expands the key to 11 keys.


		    key_add(p.get_key_container()[0], state_array);     //Adding pre_round key to State Array.

		    for(int i=1;i<=9;i++){                  //Loop to execute round 1 to 9 of encryption.
			encrypt(state_array, p.get_key_container()[i]);        //Function to perform encryption operations.
		    }
		    Subs_bytes_S(state_array);                    //Explicitly executing round 10 without mix columns.
		    shift_call_Enc(state_array);
		    key_add(p.get_key_container()[10],state_array);
		//cout<<"Encrypted State Array is:"<<endl;
		   /* for(int i=0;i<4;i++){               //printing state array after encryption.
			for(int j=0;j<4;j++){
			    cout<<hex<<static_cast<int>(state_array[i][j])<<" ";
			}
			cout<<endl;
		    }*/


		    //Decryption starts here.
		    key_add(p.get_key_container()[10], state_array);       //pre round key added for decryption.
		    for(int i = 9 ; i>=1 ; i--){                //loop for executing round 1 to 9 of decryption.
			decrypt(state_array, p.get_key_container()[i]);
		    }
		    shift_call_Dec(state_array);              //Explicitly executing round 10 of decryption without inverse mix columns.
		    Subs_bytes_Dec(state_array);
		    key_add(p.get_key_container()[0], state_array);
		/*cout<<"Decrypted State Array is:"<<endl;    //Displaying State array After decryption.
		    for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
			    cout<<hex<<static_cast<int>(state_array[i][j])<<" ";
			}
			cout<<endl;
			
		    }*/
		    char res[16];
		    int counter =0;
		    for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				res[counter++] = state_array[j][i];
			}
	   	}
	   	string ret_str;
	   	
	   	for(int i=0;i<16;i++){
	   		ret_str[i] = res[i];
	   	}
	   	ret_str[16] = '\0';
	   	
	   	cout<<endl<<ret_str<<endl<<"test"<<endl;
		    response.send(Http::Code::Ok, res);
		}
		else{
			response.send(Http::Code::Ok, "you have passed an invalid key!");
		}
	}
	else
	{
		response.send(Http::Code::Ok, "you have passed an invalid text!");	
	}
}

int main(int argc, char* argv[]) 
{
    using namespace Rest;

    Router router;      // POST/GET/etc. route handler
    Port port(65530);    // port to listen on
    Address addr(Ipv4::any(), port);
    std::shared_ptr<Http::Endpoint> endpoint = std::make_shared<Http::Endpoint>(addr);
    auto opts = Http::Endpoint::options().threads(1);   // how many threads for the server
    endpoint->init(opts);

    /* routes! */
    Routes::Get(router, "/hello", Routes::bind(&AES));

    endpoint->setHandler(router.handler());
    endpoint->serve();
}
