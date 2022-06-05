// reverse the string word wise only
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[] = {"gautam is a good boy"};
    int start =0;
    int end=0;
    int length = strlen(a);
    int iterator =0;
    while(iterator < length)
    {
         while(iterator < length  && a[iterator]==' ')
         iterator++;
         start =iterator;
         while(iterator<length && a[iterator]!=' ')
         iterator++;
         end = iterator-1;
         while(start<end){
             char temp = a[start];
             a[start] = a[end];
             a[end] = temp;
             start++;
             end--;
         }

    }

    start = 0;
    end = length-1;
    while(start<end)
    {
        char temp = a[start];
        a[start]= a[end];
        a[end]= temp;
        start++;
        end--;
    }

    cout<<"your word wise reverse of a string is : "<<a;
    return 0;
}