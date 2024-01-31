#include<iostream>
using namespace std ;
int main()
{
    int i, sum=0;
    float avg;
    for(i=1 ; i<=10 ; i++)
    {
        cout<<i<<"\t";
        sum = sum+i;
    }
    cout<<"\n sum = "<<sum;
    avg = sum/10;
    cout<<"\n avg = "<<avg;

}