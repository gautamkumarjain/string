// program to determine whether the string is pallindrom or not

#include<bits/stdc++.h>
using namespace std;

// iterative approach
void method1(string s)
{
 int n =s.length();
   int high = n-1;
   int low = 0;
   while(low<high)
   {

       cout<<s[low]<<" "<<s[high]<<endl;
       if(s[low]!=s[high])
       {
           cout<<"not pallingrom";
          return;
       }

       low++;
       high--;

   }
    
    cout<<"pallindrom";
    return;
}
// recursive aproach
bool method2(string s,int low,int high)
{
    if(low==high)
    return true;

    if(s[low]!=s[high])
    return false;

    return method2(s,low+1,high-1);


}

int main()
{

    string s ="absbbbba";
   method1(s);

   cout<<method2(s,0,s.length()-1);
   
    return 0;
}