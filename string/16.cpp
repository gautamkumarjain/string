// program to convert all the first letter of each word of s sentence

#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s = "hello my name is gautam jain";
    s[0] = s[0]-32;
    for(int i= 1l;i<s.size();i++)
    {
        if(s[i-1]==' ')
        {
            s[i]=s[i]-32;
        }

    }

    cout<<s;

    return 0;
}