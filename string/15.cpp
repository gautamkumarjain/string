// program to replace all the occerence of ab with c without using extra space

#include<bits/stdc++.h>
using namespace std;

// time complexity is O(n^2)

void bruteforceapproach(string s)
{
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='a'&&s[i+1]=='c')
        {
            s[i]='P';

            
            for(int k=i+1;k<s.size();k++)
            {
                s[k]=s[k+1];
            }
        }
    }


    cout<<s;
}


// optimised approach time complexity is O(n)

void method(string str)
{
    //int len = strlen(str);
   int len = str.size();
    if (len < 2)
       return;
 
    int i = 0;  // Index in modified string
    int j = 0; // Index in original string
 
    // Traverse string
    while (j < len-1)
    {
        // Replace occurrence of "AB" with "C"
        if (str[j] == 'a' && str[j+1] == 'c')
        {
            // Increment j by 2
            j = j + 2;
            str[i++] = 'P';
            continue;
        }
        str[i++] = str[j++];
    }
 
    if (j == len-1)
      str[i++] = str[j];
 
    // add a null character to terminate string
    
   //str[i+1] = '\0';


// in string we use str.resize() method instead of null character

   str.resize(i);
   cout<<str;
   
}

int main()
{

     string s= "acacacacacacacacacacacacacaccakkacacaacacackkacac";

    
    //bruteforceapproach(s);
    cout<<endl;
   method(s);

    return 0;
}

