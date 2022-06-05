// reverse of string
#include<bits/stdc++.h>

using namespace std;
int main()
{
    char a[30];
    cout<<"enter the string";
    gets(a);
    int l = strlen(a);
    cout<<"the size of string is :"<<l;

    for(int i=0;i<l/2;i++)
    {
        char c = a[i];
        a[i]=a[l-1-i];
        a[l-1-i] = c;

    }

   a[l] ='\0';
    cout<<"\n your reversed string is :"<<a;
    









    return 0;
}