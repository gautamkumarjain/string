// program to print longest pallendrom time complexity of this program is O(n^2)


#include<bits/stdc++.h>
using namespace std;

void printt(string s,int start ,int end)
{
    for(int i=start;i<end;i++)
    {
        cout<<s[i];
    }
}
void longestpalendrom(string s)
{
    int low,high;
    int start=0;
    int end =1;
    for(int i=1;i<s.length();i++)
    {
        // for even pallendrom
        low = i-1;
        high = i;
        while( low >=0 && high<s.length() && s[high]==s[low])
        {    
            if((high - low + 1)>end)
             {start=low;
             end =high-low+1;
             }
             high++;
             low--;
             

        }
         
         // for odd pallendrom
         low = i-1;
        high = i+1;
        while( low >= 0 && high<s.length() && s[high]==s[low])
        {    
            if((high - low + 1)>end)
             {
                 start=low;
                end =high-low+1;
             }
             high++;
             low--;
             
        }
    }
    printt(s,start,end);
}
int main()
{

      string s = "aaabbbaaaaaaa";
      longestpalendrom(s);
    return 0;
}