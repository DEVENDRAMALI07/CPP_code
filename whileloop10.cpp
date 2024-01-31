#include<iostream>
using namespace std ;
int main()
{
    int n, rem , revno=0,temp;
    cout<<"Enetr the any number";
    cin>>n;
    temp=n;
    while(n>0)
    {
        rem = n%10;
        revno = (revno*10)+rem;
        n = n/10;

    }
    if(rem=revno)
    {
        cout<<"The no is palindron";
    }
    else
    {
        cout<<"\n The not is not palindron numbers";

    }

}