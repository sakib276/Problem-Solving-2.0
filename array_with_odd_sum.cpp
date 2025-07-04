
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum=sum+ar[i];
        }
        int od=0,ev=0;
        for(int i=0;i<n;i++)
        {
        if(ar[i]%2==0)
        {
            ev++;
        }
        else
        {
           od++;
        }
        }
       if(sum%2!=0)
       {
           cout<<"YES"<<endl;
       }
       else if(od==n || ev==n)
       {
           cout<<"NO"<<endl;
       }
       else 
       {
           cout<<"YES"<<endl;
       }


    }
     return 0;
}

