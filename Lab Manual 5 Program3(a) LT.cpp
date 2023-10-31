#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sum;
    n=2;
    sum=0;
    while (n<=100)
    {
    sum+=n;
    n+=2;
    }
    cout<<"The sum of even numbers from 2 to 100 is.      "<<sum<<endl;
    }