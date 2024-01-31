#include<iostream>
using namespace std ;
int main()
{
    char ch;
    cout<<"\n Enetr the any character";
    cin>>ch;
    switch(ch)
    {
        case 'A' : cout<<"\n vowel "; break;
        case 'E' : cout<<"\n vowel"; break;
        case ' I': cout<<"\n vovel"; break;
        case 'O' : cout<<"\n vowel" ; break;
        case 'U' : cout<<"\n vowel"; break;
        case 'a' : cout<<"\n vowel"; break;
        case 'e' : cout<<"\n vowel" ; break;
        case 'i' : cout<<"\n vowel"; break;
        case 'o' : cout<<"\n vowel"; break;
        case 'u' : cout<<"\n vowel"; break;
        default : cout<<"\n it is consonant";

    }
    return 0;
}