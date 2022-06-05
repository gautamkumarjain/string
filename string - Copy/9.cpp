
//program to print sll the subsequences of a string

#include<bits/stdc++.h>

using namespace std;

// it is an recursive approach
void printsubsequences(string s,string res)
{
    if(s.length()==0)
    {
        cout<<res<<endl;;
        return;
    }
    char c = s[0];
    string ros = s.substr(1);
    printsubsequences(ros,res);
    printsubsequences(ros,res+c);
}
int main()
{
     string s ="gautam";
     string res =" ";
     printsubsequences(s,res);
}