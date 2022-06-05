// generate a binery number from 1 to n using queue datastructue

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n =15;
    queue<string> q;
    q.push("1");
    for(int i=1;i<=n;i++)
    {
       q.push(q.front()+"0");
       q.push(q.front()+"1");
       cout<<q.front()<<" ";
       q.pop();
    }
    return 0;
}