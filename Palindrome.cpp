#include <iostream>
using namespace std;
void palindrome(char s[])
{
    int i = 0;
    while(s[i]!='\0')
    {
        i++;
    }
    int start = 0 , end  = i-1,count=0;
    while(start<end)
    {
        if(s[start++]==s[end--])
        {
            count++;
        }
    }
    if(count == i/2)
        cout<<"Palindrome";
    else
        cout<<"Not a Palindrome";
}
int main()
{
    char s[100];
    cin>>s;
    palindrome(s);
    return 0;
}