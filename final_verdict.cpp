#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n];
         int s=0;
        for(int i=0;i<n;i++)
        {
             cin>>ar[i];
             s=s+ar[i];
        }
       if(s==n*k)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }

    }
}

