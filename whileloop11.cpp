#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    int n ,rem , count=0, sum=0, temp;
    cout<<"Enter the any  numbers ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        n = n/10;
        count ++;

    }
    n = temp;
    while(n>0)
    {
        rem = n%10;
        sum =sum+pow(rem,count);
        n = n/10;
    }
    cout<<"sum ="<<sum;
    if(temp==sum)
    {
        cout<<"Numbers is armstrong";
    }
    else
    {
        cout<<"Numbers are not armstrong";
    }

}