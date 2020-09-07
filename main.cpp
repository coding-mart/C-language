#include <iostream>

using namespace std;

int main()
{
    int a,b=0,c;
    cout<<"enter the number for generating table?";
    cin>>a;
    do
    {
        b++;
        c=a*b;
        cout<<a<<"*"<<b<<"="<<c<<endl;

    }while(b<10);

    return 0;
}
