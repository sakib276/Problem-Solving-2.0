#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int ans ;
        int mn=ar[0];
        int mx=ar[n-1];
       // cout<<mn<< " "<<mx<<endl;
      if(s==mn || s<mn)
        {
            ans= mx-s;
        }
        else if(s==mx || s>mx)
        {
            ans=s-mn;
        }
        else if(mn<s && s<mx)
        {
            int a=s-mn;
            int b=mx-s;
            if(a<b)
            {
                ans=2*a+b;
            }
            else
            {
                ans=2*b+a;
            }
        }
        cout<<ans<<endl;
    }
}

