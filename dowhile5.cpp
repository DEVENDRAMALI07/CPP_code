#include<iostream>
using namespace std ;
int main()
{
    int i , sum=0;
    float avg;
    i=1;
    do
    {
       cout<<i<<"\t";
       sum=sum+i;
       i++;

    }while(i<=10);
    cout<<"\n sum = "<<sum;
    avg = sum / 10 ;
    cout<<"\n avg = "<<avg;
}