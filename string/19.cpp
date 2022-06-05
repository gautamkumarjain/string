// program to remove the adjacent duplicate from the string

#include<bits/stdc++.h>
using namespace std;


// bruteforce approach
void method(string s)
{
    int k =0;
    int i=0;
    while(i<s.length())
    {
        if(s[i]!=s[i+1])
        {
            s[k++]=s[i++];
        }
        else
        i++;
    }

    s.resize(k);
    cout<<s;

    
}

int main()
{
    string s = "aabbaabbbbavvvvvaffdffkkjjhjp";
    method(s);
}