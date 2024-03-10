#include <iostream>
using namespace std;

# include <iostream>
using namespace std;

void Calculator(char op, float num1, float num2){
 
 float results=0.0;
  switch(op) {

    case '+':
      results= num1 + num2;
      cout << num1 << " + " << num2 << " = "<<results;
      
      break;   //insert a breakpoint

    case '-':
      results=num1-num2;
      cout << num1 << " - " << num2 << " = " <<results;
      break;   //insert a breakpoint

    case '*':
      results=num1*num2;
      cout << num1 << " * " << num2 << " = " << results;
      break;   //insert a breakpoint

    case '/':
      results=num1/num2;
      cout << num1 << " / " << num2 << " = " <<results;
      break;   //insert a breakpoint

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }
}

void SwapValue(int &a, int &b) {
   int t = a;
   a = b; //insert a breakpoint
   b = t; //insert a breakpoint
}


int main(){

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter First Number: ";
  cin >> num1;
  cout<<"Enter Second Number: ";
  cin>> num2;

  Calculator(op,num1,num2);
  int a, b;
  cout<<"\n Enter the value of a: ";
  cin>>a;
  cout<<"Enter the value of b: ";
  cin>>b;
  SwapValue(a, b);
cout<<"\nAfter swapping, the values are: a = "<<a<<" , b = "<<b<<endl;

return 0;

}