// print Duplicate characters in a string

#include<bits/stdc++.h>
using namespace std;


void method1(string s)
{
    int count[256]={0};

    for(int i=0;i<s.length();i++)
       {
           count[s[i]]++;
       }

       for(int i=0;i<=256;i++)
       {
           if(count[i]>1)
           {
               printf("%c ",i);
           }
       }
}

 void method2(string s){
    
    unordered_map<char,int> m;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    for(auto it: m)
    {
        if(it.second>1)
        {
            cout<<it.first<<" ";
        }
    }
}
int main()
{

string s = "gautam";
method1(s);//using a counter array;
method2(s);// using map;

    return 0;
}