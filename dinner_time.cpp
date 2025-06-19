#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,p,q;
        cin>>n>>m>>p>>q;
       int a= n/p;
       int b=n%p;
       if(b==0)
       {
           if(m==a*q)
           {
               cout<<"yes"<<endl;
           }
           else
           {
               cout<<"no"<<endl;
           }
       }
       else
       {
           cout<<"yes"<<endl;
       }
    }
}

