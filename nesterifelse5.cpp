#include<iostream>
using namespace std ;
int main()
{
    char ch;
    cout<<"\n Enetr the any character";
    cin>>ch;
    if(ch>='0'  &&  ch<='g')
    {
        cout<<ch<<"is digital";

    }
    else
    {
        if((ch>='A' && ch<='Z') || (ch>='a'  &&  ch<='z'))
        {
            cout<<ch<<"\n is alphabt ";
            if(ch=='A'  ||  ch=='E'  || ch=='I'  ||  ch=='O' || ch=='u'  || ch=='a'  ||  ch=='e' || ch=='i'  ||  ch=='o'  || ch=='u')
                      
            {
               cout<<ch<<"\n is vowel";

            }
            else
            { 
                cout<<ch<<"is consonant";

            }
        }
        else
        {
            cout<<ch<<"\n is special symbol";
            
        }
    }
}