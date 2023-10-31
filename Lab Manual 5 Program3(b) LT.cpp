#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sum,square;
    n=1;
    sum=0;
    while (n<=10)
    {
    square=n*n;
    sum+=square;
    n++;
    }
    cout<<"The sum of squares from 1 to 100 is     "<<sum<<endl;
    }