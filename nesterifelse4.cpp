#include<iostream>
using namespace std ;
int main()
{
    int a, b,c ;
    cout<<"\n Enter the any numbers ";
    cin>>a>>b;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<"\n is maximum";

        }
        else
        {
            cout<<c<<"\n is maximum";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<"\n is maximum";

        }
        else
        {
            cout<<c<<"\n is maximum";

        }
    }
}