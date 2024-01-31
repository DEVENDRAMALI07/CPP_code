#include<iostream>
using namespace std ;
int main()
{ 
    int per;
    cout<<"\n Enetr the any number ";
    cin>>per;
    if(per>=75)
    {
        cout<<"\n A grade";

    }
    else if(per>50  &&  per<75)
    {
      cout<<"\n B grade";

    }
    else if(per>=35 && per<50)
    {
       cout<<"\n C grade";

    }
    else 
    {
        cout<<"\n fail";
        
    }

    
    


}