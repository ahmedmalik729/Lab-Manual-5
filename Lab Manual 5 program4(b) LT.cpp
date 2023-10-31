#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,sum;
    sum=0;
    cout<<"Enter a number"<<endl;
    cin>>a;
    int n=a;
    cout<<"Enter another number"<<endl;
    cin>>b;

    while (n<=b)
    {
        if (n%2!=0)
        {
            sum+=n;
            n++;
        }
        n++;
    }
    cout<<sum<<endl;
}
