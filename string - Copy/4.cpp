// checl whether a string is pa;;endrom or not
#include<bits/stdc++.h>
using namespace std;

	int isPlaindrome(string s)
	{
	    
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]!=s[s.length()-1-i])
	        return 0;
	    }
	    return 1;
	}
int main()
{
    string s = "gautam";
     cout<<isPlaindrome(s);
}