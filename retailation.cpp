
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int ar[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        bool flag=true ;
        int f=0;

        for(long long int i=0;i<n;i++)
        {
            long long int a=i+1;
            long long int b=n-a+1;
           if(ar[i]%a!=0 || ar[i]%b!=0)
           {
               flag=false;
               break;
           }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

