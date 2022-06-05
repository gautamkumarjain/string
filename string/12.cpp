// program to check a string is a substring of another substrinng or not

#include<bits/stdc++.h>
using namespace std;



// time complexity is O(n^2);

bool check(string s1,string s2)
{
    int j;
    for(int i=0;s1[i+s2.size()-1];i++)
    {
        int k = i;
        for(j=0;j<s2.length();j++)
        {
              if(s1[k]!=s2[j])
              {
                  break;
              }
               k++;
        }

        if(j==s2.length())
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s1 = "gautamjain";
    string s2 = "im";
  cout<<check(s1,s2);
    return 0;
}