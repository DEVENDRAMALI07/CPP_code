#include<iostream>
using namespace std ;
 int main()
 {
    int a, b;
    cout<<"Enetr the any numbers";
    cin>>a>>b;
    if(a==b)
    {
        cout<<"\n numbers are equal";

    }
    else
    {
        cout<<"\n numbers are not equal";
        if(a>b)
        {
            cout<<a<<"\n is maximum numbers "<<b;

        }
        else
        {
            cout<<b<<"\n is maximum than "<<a;

        }
    }
}