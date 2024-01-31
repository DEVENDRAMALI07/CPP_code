#include<iostream>
using namespace std ;
 int main ()
 {
    int i , sum=0;
    float avg;
    i=1;
    while(i<=10)
    {
        cout<<i<<"\t";
        sum = sum+i;
        i++;


    }
    cout<<"\n sum="<<sum;
    avg=sum % 10;
    cout<<"\n avg="<<avg;
    
 }