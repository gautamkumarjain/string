// progam to reverse a string

#include<bits/stdc++.h>
using namespace std;
// iterative approach

void method(string s)
{
    int low = 0;
    int high = s.length()-1;

    while(low<high)
    {
         char temp = s[low];
         s[low]=s[high];
         s[high]=temp;

         low++;
         high--;
    }

    cout<<s;
}

// recursive appraoch
 void method2(string &s,int low,int high)
{
     if(low >= high)
     return;

         char temp = s[low];
         s[low]=s[high];
         s[high]=temp;
         
         return method2(s,low+1,high-1);

}

// using inbuilt reverse function

void method3(string &str)
{
     reverse(str.begin(), str.end());
}
int main()
{
    string s ="Techie Delight";
   // method(s);
  // method2(s,0,s.length()-1);
  method3(s);
   cout<<s;
    return 0;
}