
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
   long long  int a,x,y;
     cin>>x>>y>>a;

          long long int sum=x+y;
          if(a%sum==0)
          {
              cout<<"NO"<<endl;

          }
          else
          {
            long long b=a%sum;
            if(b<x)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
          }
    }
}

