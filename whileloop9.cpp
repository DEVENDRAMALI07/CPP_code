#include<iostream>
using namespace std ;
int main()
{
    int n , rem, revno=0;
    cout<<"\n Enter the any numbers";
    cin>>n;
    while(n>0)
    {
        rem = n%10;
        revno = (revno*10)+rem;
        n = n/10;
    }
    cout<<"\n Revers numbre = " <<revno;
}