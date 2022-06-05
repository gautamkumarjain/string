//String first = "XY";
  //  String second = "12";
    
//String[] results = {"1XY2", "Y12X"};


//Write a Program to check whether a string is a valid shuffle of two strings or not
#include<bits/stdc++.h>
using namespace std;


//time complexity of this approach is O(n)
bool isvalidshuffle(string s1,string s2,string shuffle)
{
    if(s1.length()+s2.length()!=shuffle.length())
    {
       return false;
    }
    int i=0,j=0,k=0;
    while(k<shuffle.length())
    {
        if(s1[i]==shuffle[k])
        i++;
        else if(s2[j]==shuffle[k])
        j++;
        else{
            return false;
        }
        k++;
    }


    if(i<s1.length()||j<s2.length())
    {
        return false;
    }

    return true;
}




int main()
{


    string s1 = "XY";
    string s2 = "12";
    string result1 = "1XY2";
    string result2 = "Y12X";

    cout<<isvalidshuffle(s1,s2,result1);
    cout<<endl;
    cout<<isvalidshuffle(s1,s2,result2);
    return 0;
}