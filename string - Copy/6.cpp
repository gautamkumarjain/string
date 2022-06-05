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
    string s1="CDABA";
    string s2 = "ABaCD";
                    
    //method1(s1,s2);
    cout<<endl;
    cout<<method2(s1,s2);

    return 0;
}
