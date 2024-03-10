#include <iostream>
#include <string>
#include <openssl/sha.h>
using namespace std;
class student
    {public:
};
string hasher(string & str)
{  
  unsigned char hash[SHA_DIGEST_LENGTH]; // == 20

  SHA1(reinterpret_cast<const unsigned char *>(str.c_str()), sizeof(str) - 1, hash);
  string new_str;
  for(int i=0;i<sizeof(hash);i++)
  {
    new_str.push_back(hash[i]);
  }
  new_str.push_back('\0');
  return new_str;

}
template<class User_type>
class hash_node{
    string prev_hash;
    string date;
    string time;
    string action;
    User_type user;
    hash_node<User_type> *next;
    hash_node<User_type> *prev;
    public:unsigned char hash[SHA_DIGEST_LENGTH];
    hash_node(string prev_hash,string date,string time,string action, User_type user)
    {
        this->prev_hash=prev_hash;
        this->date=date;
        this->time=time;
        this->action=action;
        this->user=user;
        this->next=NULL;
        this->prev=NULL;
    }
    string concat()
    {
        return prev_hash+date+time+action//+whatever user.name or something;
    }
};
template <class User>
class hash_chain{
    hash_node<User> *head;
    hash_node<User> *tail;
    public:
    hash_chain()
    {
        head =NULL;
        tail=NULL;
    }
    void insert_end(string prev_hash,string date,string time,string action, User user)
    {
        hash_node<User> * temp=new hash_node(prev_hash,date,time,action,user);
        if(head ==NULL && tail==NULL)
        {
            head = temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }
    string hash()
    {
        return hasher(tail->concat());
    }
    void writeHashChainToFile(const   string& filename) {
          ofstream file(filename,   ios::binary);

        if (!file) {
              cerr << "Error opening the file for writing." <<   endl;
            return;
        }

        // Traverse the chain and write each node to the file
        hash_node<User>* current = chain.getHead();
        while (current != nullptr) {
            // Calculate the hash of the node
              string node_hash = hasher(current->concat());

            // Write the hash and node data to the file
            file.write(node_hash.c_str(), SHA_DIGEST_LENGTH);
            file.write(reinterpret_cast<const char*>(current), sizeof(hash_node<User>));

            current = current->getNext();
        }

        file.close();
    }
    void readHashChainFromFile(const   string& filename) {
          ifstream file(filename,   ios::binary);

        if (!file) {
              cerr << "Error opening the file for reading." <<   endl;
            return;
        }

        // Read and process each node from the file
        while (true) {
              string node_hash(SHA_DIGEST_LENGTH, '\0');
            file.read(&node_hash[0], SHA_DIGEST_LENGTH);

            if (file.eof()) {
                break; // End of file reached
            }

            hash_node<User> node("", "", "", "", Student());
            file.read(reinterpret_cast<char*>(&node), sizeof(hash_node<User>));

            // Check the hash to ensure data integrity (compare with node_hash)
              string calculated_hash = hasher(node.concat());
            if (calculated_hash != node_hash) {
                  cerr << "Data corruption detected! Skipping this node." <<   endl;
                continue;
            }

            // Insert the node into the chain
           this->insert_end(node.getPrevHash(), node.getDate(), node.getTime(), node.getAction(), node.getUser());
        }

        file.close();
    }

};


//code flow
int main()
{ // write in some file after creating first time like H.writeHashchainToFile(filename);
// After that always
    
    string sTR="uME"
    hash_chain<Student> H;
    H.readHashChainFromFile(filename);
    H.insert(H.hash(),"\0","\0","\0",T);


  return 0;
}
