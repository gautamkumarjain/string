// program to print all the permutations


//the time complexity of this method is O(n! * n)
#include<bits/stdc++.h>
using namespace std;
void swap(char a,char b)
{
    char temp = a;
    a = b;
    b = temp;
}
void permutation(string s ,int l , int n)
{
    if(l==n)
    {
        cout<<s<<" ";
        
    }
    else
    {
        
          for(int i=l;i<n;i++)
          {
            swap(s[l],s[i]);
            permutation(s,l+1,n) ;
            swap(s[l],s[i]);
          }
   }
}
int main()
{
    string s ="ABC";
    permutation(s,0,3);
    return 0;
}