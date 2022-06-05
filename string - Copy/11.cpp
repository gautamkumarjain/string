/*.Given a binary string str of length N, the task is to find the maximum count of substrings 
str can be divided into such that all the substrings are balanced i.e. they have equal number of 0s and 1s. 
If it is not possible to split str satisfying the conditions then print -1.*/

#include<bits/stdc++.h>
using namespace std;


//the time complexity of this approach is O(n)


void countbalancestring(string s)
{
    int count1 =0;
    int count0 =0;
    int count =0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        count0++;                //010011010

        if(s[i]=='1')
        {
          count1++;
        }
         if(count0 == count1)
         {
            count++;
         }
    }
    if(count!=0)
    cout <<"the totel number of balanced substring are "<<count;
    else cout<<"the total number of balanced substring are -1";
}

int main()
{

    string s= "0100110101";
    countbalancestring(s);
    return 0;
}