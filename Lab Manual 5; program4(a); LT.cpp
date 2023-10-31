#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double n,i,result;
    n=2;
    i=0;

    while (i<=20)
    {
        result=pow(n,i);
        cout<<result<<endl;
        i++;
    }

}
