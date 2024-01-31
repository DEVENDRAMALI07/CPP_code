#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"\n Enter the character ";
    cin>>ch;
    if(ch>='A'  &&   ch<='Z')
    {
        cout<<"\n it is a uppercase letter";

    }
    else
    {
        cout<<"\n it is a lowercase letter";

    }
}