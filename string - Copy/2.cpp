// reverse each word in a character array

#include<bits/stdc++.h>
using namespace std;
int main()
{

    char str[] = "gautam is a good boy";
    int start =0;
    int end =0;
    int l = strlen(str);
    
    int i=0;
    cout<<l<<" ";
    while(i<l)
    {

       
       while( i<l && str[i]==' ')
       {
          i++;
       }
       start = i;
       while(i<l && str[i]!=' ' && str[i]!='\0')
       {
          i++;
       }
       end = i-1;

      while(start<end)
      {
         char temp = str[start];
         str[start]=str[end];
         str[end] = temp;
         start++;
         end--;
      }

      


    }  
     cout<<str<<endl;   
  
    
    return 0;
}