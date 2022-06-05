// Determine whether two strings are anagram or not

#include<bits/stdc++.h>
using namespace std;
bool check2(string s1,string s2);
bool check(string s1,string s2)
{


    if(s1.length()!=s2.length())
    return false;
   unordered_map<int,int> m;

    for(char ch: s1)
    {
        m[ch]++;

    }

    for(char c : s2)
    {
        if(m.find(c)==m.end())
        {
            return false;
        }

        m[c]--;
        if(m[c]==0)
        {
            m.erase(c);
        }
        
    }


    return true;

}
int main()
{
    

    string s1 = "tommarvoloriddle";
    string s2 = "iamlordvoldemort";

    cout<<check(s1,s2);
    cout<<endl;
    cout<<check2(s1,s2);


    return 0;
}

// another menthod

bool check2(string s1,string s2)
{
    unordered_map<int,int> m1;
    unordered_map<int,int>m2;

    for(char c1:s1)
    {
        m1[c1]++;
    } 

    for(char c2:s2)
    {
        m2[c2]++;
    }


      return m1==m2;
}