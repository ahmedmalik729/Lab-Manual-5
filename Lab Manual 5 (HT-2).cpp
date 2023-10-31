#include <iostream>
using namespace std;
int main()
{
    float a,n,d,sum;
    // a is the first number of Arithmetic Series
    // n is the number of terms
    // d is the common difference between two adjacent numbers

    cout<<"Enter the first number of Arithmetic Series"<<endl;
    cin>>a;

    cout<<"Enter the common difference of the Arithmetic Series."<<endl;
    cin>>d;

    cout<<"Enter the number of term (Nth term) up till you want the sum of the Series."<<endl;
    cin>>n;

    sum=(n/2)*(2*a+(n-1)*d);
    cout<<"The sum of the Arithmetic Series up to the Nth term is  "<<sum<<endl;
}