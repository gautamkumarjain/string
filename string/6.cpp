// Write a Code to check whether one string is a rotation of another



#include<bits/stdc++.h>
using namespace std;


//this method is not good because time complexity of this method is O(n^3)

void method1(string s1,string s2)
{
    string s3 = s1+s1;                       

  int flag =0;
  string kp;
  if(s1.length()!=s2.length())
  {
      flag=1;
  }
   for(int i=0;i<s3.length();i++)
   {
       for(int j=i;j<s3.length();j++)
       {   
           kp="";
           for(int k =i;k<=j;k++)

            {   
               kp = kp+s3[k];
               
           }
           

           if(kp.compare(s2)==0)
           {
               flag =1;
           }

       }
   }
   if(flag)
   {
       cout<<" the both string are rotatable of each other" ;
   }
   else
   {
       cout<<" not rotating of each other ";
   }
}
//this approach is good because time complexity of this approach is O(n)

bool method2(string s1,string s2)
{
    string temp = s1+s1;
    
    if(s1.length() != s2.length())
    {
        return false;
    }

   if(temp.find(s2)==string::npos) 
   return false;
   else return true;


}


int main()
{
    string s1="ABCD";
    string s2 = "DABC";
                    
    //method1(s1,s2);
    cout<<endl;
    cout<<method2(s1,s2);

    return 0;
}



// another approach



// Function to check if `X` can be derived from `Y` by rotating it
// bool check(string X, string Y)
// {
//     int m;
 
//     // if string lengths are different, they can't be
//     // derived from each other
//     if ((m = X.length()) != Y.length()) {
//         return false;
//     }
 
//     // Invariant: At the i'th iteration of this loop,
//     // the string `X` will be rotated by `i` units
//     for (int i = 0; i < m; i++)
//     {
//         // in-place left rotates string `X` by 1 unit
//         rotate(X.begin(), X.begin() + 1, X.end());
 
//         // for right rotation, we can use reverse iterators.
//         // i.e., rotate(X.rbegin(), X.rbegin() + 1, X.rend());
 
//         // return true if `X` becomes equal to `Y`
//         if (!X.compare(Y)) {
//             return true;
//         }
//     }
 
//     // return false if no rotation is matched
//     return false;
// }