#include<iostream>
#include<string>
using namespace std;
class hill{
    int key_mat[3][3];
    int key_mat_inv[3][3];
    string c_text;
    string p_text;
    string d_text;
    public:
    hill()
    {
        do
        {
            input_matrix();
        } while (determinant()==0);
        inverse(key_mat,key_mat_inv);
    }
    void input_matrix()
    {
        cout<<"\nEnter 3*3 matrix:\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>key_mat[i][j];
                while(key_mat[i][j]>26)
                {
                    cout<<"\nInvalid number :TryAgain:";
                    cin>>key_mat[i][j];
                }
            }
        }
        print_mat();
    }
    int determinant() {
    return key_mat[0][0] * (key_mat[1][1] * key_mat[2][2] - key_mat[1][2] * key_mat[2][1]) -
           key_mat[0][1] * (key_mat[1][0] * key_mat[2][2] - key_mat[1][2] * key_mat[2][0]) +
           key_mat[0][2] * (key_mat[1][0] * key_mat[2][1] - key_mat[1][1] * key_mat[2][0]);
    }
    int find_x(int det)
    {
        for(int i=1;i<=26;i++)
        {
            if((det*i)%26==1)
                return i;
        }
        return 0;
    }
    void print_mat()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<key_mat[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    int getCofactordet(int temp[][3], int p, int q)
    {
        int i = 0, j = 0,A[2][2],result=0;
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                if (row != p && col != q) {
                    A[i][j++]=temp[row][col];
                    if (j == 2) {
                        j = 0;
                        i++;
                    }
                }
            }
        }
        result=(A[0][0]*A[1][1]-A[0][1]*A[1][0]);
        if((p!=1 && q==1) || (p==1 && q!=1))
        {
            result *=-1;
        }
        return result;
        
    }
    void inverse(int A[][3],int result[][3])
    {
        int determinant = this->determinant()%26;
        if(determinant<0)
        {
            determinant=26+determinant;
        }
        determinant = this->find_x(determinant);
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                result[j][i]=(determinant*getCofactordet(A,i,j))%26;
                if(result[j][i]<0)
                {
                    result[j][i]=26+result[j][i];
                }
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<result[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    void input_text()
    {
        cout<<"\nEnter Plain Text:"<<endl;
        cin>>p_text;
        int i=0;
        for(int i=0;p_text[i]!='\0';i++)
        {
            if(p_text[i]>='a' && p_text[i]<='z')
            {
                p_text[i]-=32;
            }
        }
        while(p_text[i]!='\0')
        {
            if(p_text[i+1]=='\0')
            {
                p_text[i+1]='X';
                p_text[i+2]='\0';
            }
            if(p_text[i+2]=='\0')
            {
                p_text[i+2]='X';
                p_text[i+3]='\0';  
            }
            i+=3;
        }
    }
    void encrypt()
    {
        int i=0;
        char *arr=new char [3];
        int *p;
        while(p_text[i]!='\0')
        {
                arr[0]=p_text[i];
                arr[1]=p_text[i+1];
                arr[2]=p_text[i+2];
                p=convert(arr);
                p=matrixMultiply(key_mat,p);
                arr=convert_back(p);
                c_text.push_back(arr[0]);
                c_text.push_back(arr[1]);
                c_text.push_back(arr[2]);
                i+=3;
        } 
        c_text.push_back('\0');
        cout<<"\nEncrypted Text is:"<<c_text<<endl;
    }
    void decrypt()
    {
        int i=0;
        char *arr=new char [3];
        int *p;
        while(p_text[i]!='\0')
        {
                arr[0]=c_text[i];
                arr[1]=c_text[i+1];
                arr[2]=c_text[i+2];
                p=convert(arr);
                p=matrixMultiply(key_mat_inv,p);
                arr=convert_back(p);
                d_text.push_back(arr[0]);
                d_text.push_back(arr[1]);
                d_text.push_back(arr[2]);
                i+=3;
            } 
            cout<<"\nDecrypted Text is:"<<d_text<<endl;;
        
        }
        int * matrixMultiply(int A[3][3], int *B) {
            int *result = new int [3];
        for (int i = 0; i < 3; ++i) {
            result[i] = 0;
            for (int j = 0; j < 3; ++j) {
                result[i] += A[i][j] * B[j];
            }
            result[i]=result[i]%26;
        }
        delete [] B;
        return result;
    }
    int * convert(char* arr)
    {
        int * num = new int [3];
        for(int i=0;i<3;i++)
        {
            num[i]= arr[i]-'A';
        }
        delete [] arr;
        return num;
    }
    char * convert_back(int *arr)
    {
        char * chs=new char [3];
        for(int i=0;i<3;i++)
        {
            chs[i] = char(arr[i]+'A');
        }
        delete [] arr;
        return chs;
    }
};
int main()
{
    hill h;
    h.input_text();
    h.encrypt();
    h.decrypt();
}