#include <iostream>
#include<math.h>
using namespace std;
int main() {
  int a,b,result=0,T;
  // a and B are input numbers
  // T will be used to decide whether to terminate or not
   char operation;
  do {
      cout<<"Enter first number"<<endl;
      cin>>a;
      cout<<"Enter second number"<<endl;
      cin>>b;
      cout<<"Enter operation(+for addition,- for subtaction, * for multiplication, / for division , % for modulus , ^ for power"<<endl;
      cin>>operation;
      switch (operation) {
          case '+':
          result=a+b;
          break;
          case '-':
          result=a-b;
          break;
           case '*':
          result=a*b;
          break;
           case '/':
           if (b==0) {
               cout<<"invalid denominator"<<endl;
           }
          result=a/b;
          break;
             case '%':
           if (b==0) {
               cout<<"invalid second number"<<endl;
           }
          result=a%b;
          break;
          case '^':
          result=pow(a,b);
          
  
         
          default:
          cout<<"invalid operation try again"<<endl;
      }
             cout<<result<<endl;
       
      cout<<"If you want to continue,press Y, else press N"<<endl;
     cin>>T; 
  }
  while (T==1);
  
}