#include<iostream>
using namespace std ;
int main()
{
    int a,b;
    char ch ;
     cout<<"\n Enetr the any operator(*,+,-,/)";
     cin>>ch;
     cout<<"Enter the any numbers";
     cin>>a>>b;
     switch(ch)
     {
       case '+': cout<<"\n add = "<<a+b;
       case '-':cout<<"\n substraction ="<<a-b;
       case '*': cout<<"\n multiplication = "<<a*b;
       case '/': cout<<"\n division = "<<a/b ;
       default : cout<<"\n Invalide oprator";

     }
}