//Take a string containing 0's and 1's as an input from the user and 
//find the total number of 0(1+)0 patterns in the string and output it.


#include <bits/stdc++.h>

using namespace std;

int main()

{

string str;



cin >> str;

char last = str[0];

int i = 1, counter = 0;

while (i < str.size())

{

if (str[i] == '1' && last == '0')

{

while (str[i] == '1')

i++;



if (str[i] == '0')

counter++;

}


last = str[i];

i++;

 }
    
if(counter == 0 )
{
cout<<"Wrong Format";
return 0;
}
    
cout<<counter;




return 0;

}
