#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the number of rows for the diamond: "<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++) 
    {
        cout<<string(n - i, ' ')<<string(2 * i - 1, '*')<<endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        cout<<string(n - i, ' ')<<string(2 * i - 1, '*')<<endl;
    }
    return 0;
}
