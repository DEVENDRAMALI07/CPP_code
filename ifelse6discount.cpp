#include<iostream>
using namespace std ;
int main()
{
    int amt;
    float dis , f_a;
    cout<<"\n enter the amount ";
    cin>>amt;
    if(amt>10000)
    {
        cout<<"\n discount will be 10% = "; dis = (amt*10)/100;
        cout<<"\n discount amount is = "<<dis;

    }
    else
    {
        cout<<"\n discount will be 5% = ";
        dis = (amt*5)/100;
        cout<<"\n discount amount is ="<<dis;

    }
    f_a=amt-dis;
    cout<<"\n final amount is"<<f_a;
    
}