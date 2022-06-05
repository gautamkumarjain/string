// inplace remove all the occurrences of AB and C int the given string

#include<bits/stdc++.h>
using namespace std;


// this function will work  but the time complexity of this function is not good
void method1(string s)
{
    for(int i=0;s[i]!='\0';i++)
    {  
        if(s[i]=='C')
        {s.erase(s.begin()+i);
        i--;}


        
    }

    for(int i=0;s[i+1]!='\0';i++)
    {
        
        if(s[i]=='A'&&s[i+1]=='B')
        {
            
            
            s.erase(s.begin()+i);
            
            s.erase(s.begin()+i);
             i=i-2;
            
        }
    }

    cout<<s;
}


// this function having time complexity O(n)
// this program will work if we use character array why this program will not work if we use string instead of character array

void method2( char str[])
{
       int n = strlen(str);
  
    int i = -1;  // previous character
    int j = 0;   // current character
  
    while (j < n)
    {
        /* check if current and next character forms ac */
        if (j < n-1 && str[j] == 'a' && str[j+1] == 'c')
            j += 2;
  
        /* if current character is b */
        else if (str[j] == 'b')
            j++;
  
        /* if current char is 'c && last char in output
           is 'a' so delete both */
        else if (i >= 0 && str[j] == 'c' && str[i] == 'a')
            i--,j++;
  
        /* else copy curr char to output string */
        else
            str[++i] = str[j++];
    }
    str[++i] = '\0';
    cout<<str;
}
int main()
{
   char s[] ="acbcccbbbbbabacacacvvb";
    method2(s);
    
    return 0;
}