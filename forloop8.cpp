#include<iostream>
using namespace std ;
int main()
{
    int n , i , fact=1;
    cout<<"\nEnter the any numbres";
    cin>>n;
    for(i=1 ; i<=n ; i++)
    {
        fact=fact*i;

    }
    cout<<" Factorial of given numbers = "<<fact;
    
}