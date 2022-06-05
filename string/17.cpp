// program to remove all the white spaces from the string

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k=0;
    string s = "hello my name is gautam jain";
    for(int i=0;i<s.length();i++)
    {
       if(s[i]!=' ')
       {
           s[k++]= s[i];

       }
    }

    s.resize(k);
    cout<<s;
    return 0;
}