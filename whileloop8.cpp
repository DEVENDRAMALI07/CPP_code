#include<iostream>
using namespace std ;
int main()
{
    int n , rem, sum = 0;
    cout<<"\n Enter the any numbers";
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;

    }
    cout<<"\n sum of digital of given numbers = "<<sum;
    
}