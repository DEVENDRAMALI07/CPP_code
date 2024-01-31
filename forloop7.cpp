#include<iostream>
using namespace std ;
int main()
{
    int n ,f=0, s=1, next, i;
    cout<<"\n How many numbers of turm in serirs";
    cin>>n;
    for(i=0 ; i<=n ; i++)
    {
        if(i<=1)
        {
            next=i;
        }
        else
        {
            next=f+s;
            f=s;
            s=next;
        }       
        cout<<next<<'\t';
        
    }



}