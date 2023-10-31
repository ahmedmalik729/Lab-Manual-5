#include <iostream>
using namespace std;
int main()
{
    int a,b,d,HCF,LCM;
    // a and B are the input numbers
    // d will be used to check remainders
    HCF=0;
    LCM=0;
    d=1;
    cout<<"Enter fisrt number."<<endl;
    cin>>a;

    cout<<"Enter another number."<<endl;
    cin>>b;
    for(d=1;d<=a||d<=b; d++)
    {
        if (a%d==0&&b%d==0)
        {
            HCF=d;
        }
    }
    LCM=(a*b)/HCF; // This is the formula that gives the relation between LCM and HCF
    cout<<"The LCM of the two numbers is  "<<LCM<<endl;
}