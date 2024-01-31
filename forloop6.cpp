#include<iostream>
using namespace std;
int main()
{
    int n , count=0 , i;
    cout<<"\n Enter the any numbers";
    cin>>n;
    for(i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"\n Numbres is prime";
    }
    else
    {
        cout<<"\n Numbers is not a prime numbers ";
        
    }
}