#include<iostream>
#include<string>
using namespace std;
class playfair
{
private:
  char key[5][5];
  char rev_key[5][5];
  string p_text;
  string c_text;
  string d_text;

public:
  playfair (string ke = "MONARCHY\0")
   {
        int i = 0;
        int row = 0;
        int col = 0;
        while (ke[i] != '\0' && row * col <= 16)
        {
            key[row][col] = ke[i];
            col++;
            i++;
            if (col == 5)
            {
                col = 0;
                row++;
            }
        }
        if (row * col < 16)
        {
            int special = (row * 5) * col;
            int counter = 0, another = col;
            for (int i = row; i < 5; i++)
            {
                for (int j = another; j < 5; j++)
                {
                    for (char ch = 'A' + counter; ch <= 'Z'; ch++)
                    {
                        if (ch == 'J')
                        {
                            counter++;
                            continue;
                        }
                        if (not found (ch, special))
                        {
                            key[i][j] = ch;
                            counter++;
                            break;
                        }
                        counter++;
                    }
                }
                another = 0;

            }
        }
        char int_key[5][5];
        for(int i=0;i<5;i++)
        {
          for(int j=0;j<5;j++)
          {
            int_key[i][j]=key[4-i][j];
          }
        }
        for(int i=0;i<5;i++)
        {
          for(int j=0;j<5;j++)
          {
            rev_key[i][j]=int_key[i][4-j];
          }
        }
  }
  bool found (char ch, int end)
  {
    int i = 0;
    int row = 0, col = 0;
    while (i <= end)
    {
      if (key[row][col] == ch)
      {
        return true;
      }
      col++;
      if (col == 5)
      {
        row++;
        col = 0;
      }
      i++;
    }
    return false;
  }
  void print_key ()
  {
    for (int i = 0; i < 5; i++)
    {
	    for (int j = 0; j < 5; j++)
      {
        cout << key[i][j] << "\t";
      }
      cout << endl;
    }
  }
  void input()
  {
    cout<<"\nEnter Your Text:";
    cin>>p_text;
    p_text.push_back('\0');
    int i=0;
    while(p_text[i]!='\0')
    {
        if(p_text[i]>='a' && p_text[i]<='z')
        {
            p_text[i]-=32;
        }
        if(p_text[i]=='J')
        {
          p_text[i]='I';
        }
        i++;
    }
    i=0;
    while(p_text[i]!='\0' && p_text[i+1]!='\0')
    {
      if(p_text[i]==p_text[i+1])
      {
        char temp;
        temp=p_text[i+1];
        p_text[i+1]='X';
        char temp2=0;
        int j;
        for(j=i+2;p_text[j]!='\0';j++)
        {
          temp2=p_text[j];
          p_text[j]=temp;
          temp=temp2;
        }
        temp2=p_text[j];
        p_text[j]=temp;
        p_text[j+1]=temp2;
      }
      i+=2;
    }
    if(p_text[i+1]=='\0')
    {
      p_text[i+1]='X';
      p_text[i+2]='\0';
    }
    cout<<p_text<<endl;
  }
  void encrypt()
  {
    int i=0;
    c_text.clear();
    for(i=0;i<p_text[i]!='\0' && i<p_text[i+1]!='\0';i+=2)
    { 
      int capture1[2]={0},capture2[2]={0};
      int check1=0;
      for(int j=0;j<5;j++)
      {
        for(int k=0;k<5;k++)
        {
          if(key[j][k]==p_text[i])
          {
            if(check1==0)
            {
              capture1[0]=j;
              capture1[1]=k;
              check1=1;
            }
            else
            {
              capture2[0]=j;
              capture2[1]=k;
            }
          }
          else if(key[j][k]==p_text[i+1])
          {
            if(check1==0)
            {
              capture1[0]=j;
              capture1[1]=k;
              check1=-1;
            }
            else
            {
              capture2[0]=j;
              capture2[1]=k;
            }
          }
        }
      }
      char c2[2];
      if(capture1[0]==capture2[0])
      {
        int distance =capture2[1]-capture1[1];
        c2[0]=this->key[capture1[0]][capture1[1]+1];
        if(capture1[1]+1+distance>=5)
        {
          c2[1]=this->key[capture1[0]][capture1[1]+1+distance-5]; 
        }
        else
        {
          c2[1]=this->key[capture1[0]][capture1[1]+1+distance];
        }
      }
      else if(capture1[1]==capture2[1])
      {
        int distance =capture2[0]-capture1[0];
        c2[0]=this->key[capture1[0]+1][capture1[1]];
        if(capture1[0]+1+distance>=5)
        {
          c2[1]=this->key[capture1[0]+1+distance-5][capture1[1]]; 
        }
        else
        {
          c2[1]=this->key[capture1[0]+1+distance][capture1[1]];
        }
      }
      else{
        c2[0]=this->key[capture1[0]][capture2[1]];
        c2[1]=this->key[capture2[0]][capture1[1]];
      }
      if(check1==-1)
      {
        char temp;
        temp=c2[0];
        c2[0]=c2[1];
        c2[1]=temp;
        // cout<<c2[0]<<"\t"<<c2[1]<<endl;
      }
      this->c_text.push_back(c2[0]);
      this->c_text.push_back(c2[1]);

    }
   c_text.push_back('\0');
   cout<<"\nEncrypted Text is:"<<c_text<<endl;
  }
  void decrypt()
  {
    int i=0;
    for(i=0;i<c_text[i]!='\0' && i<c_text[i+1]!='\0';i+=2)
    { 
      int capture1[2]={0},capture2[2]={0};
      int check1=0;
      for(int j=0;j<5;j++)
      {
        for(int k=0;k<5;k++)
        {
          if(rev_key[j][k]==c_text[i])
          {
            if(check1==0)
            {
              capture1[0]=j;
              capture1[1]=k;
              check1=1;
            }
            else
            {
              capture2[0]=j;
              capture2[1]=k;
            }
          }
          else if(rev_key[j][k]==c_text[i+1])
          {
            if(check1==0)
            {
              capture1[0]=j;
              capture1[1]=k;
              check1=-1;
            }
            else
            {
              capture2[0]=j;
              capture2[1]=k;
            }
          }
        }
      }
      char c2[2];
      if(capture1[0]==capture2[0])
      {
        int distance =(capture2[1]-capture1[1]);
        c2[0]=this->rev_key[capture1[0]][capture1[1]+1];
        if(capture1[1]+1+distance>=5)
        {
          c2[1]=this->rev_key[capture1[0]][capture1[1]+1+distance-5]; 
        }
        else
        {
          c2[1]=this->rev_key[capture1[0]][capture1[1]+1+distance];
        }
      }
      else if(capture1[1]==capture2[1])
      {
        int distance =capture2[0]-capture1[0];
        c2[0]=this->rev_key[capture1[0]+1][capture1[1]];
        if(capture1[0]+1+distance>=5)
        {
          c2[1]=this->rev_key[capture1[0]+1+distance-5][capture1[1]]; 
        }
        else
        {
          c2[1]=this->rev_key[capture1[0]+1+distance][capture1[1]];
        }
      }
      else{
        c2[0]=this->rev_key[capture1[0]][capture2[1]];
        c2[1]=this->rev_key[capture2[0]][capture1[1]];
      }
      if(check1==-1)
      {
        char temp;
        temp=c2[0];
        c2[0]=c2[1];
        c2[1]=temp;
        // cout<<c2[0]<<"\t"<<c2[1]<<endl;
      }
      this->d_text.push_back(c2[0]);
      this->d_text.push_back(c2[1]);
    }c_text.clear();
   d_text.push_back('\0');
   cout<<"\nDecrypted Text is:"<<d_text<<endl;
  }
};
    


int
main ()
{
  playfair p;
  p.print_key ();
  p.input();
  p.encrypt();
  p.decrypt();
}
