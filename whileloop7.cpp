#include<iostream>
using namespace std ;
int main()
{
    int n , count=0;
    cout<<"\n Enter the any number";
    cin>>n;
    while(n>0)
    {
        n=n/10;
        count++;

    }
    cout<<"\n  Number of digital of given number "<<count;
    
}