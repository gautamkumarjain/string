// program to reverse a strig using stack data structure

#include<bits/stdc++.h>
using namespace std;

void method(string s)
{
    stack<char> st;
    int i=0;
    while(s[i]!='\0')
    {
        st.push(s[i]);
        i++;
    }
    s="";
    while(st.size()!=0)
    {
        s= s+st.top();
        st.pop();
    }

    cout<<s;
  
}
int main()
{

    string s = "gautam jain";
    method(s);
    return 0;
}