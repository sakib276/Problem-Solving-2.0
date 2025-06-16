
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
       long long int ans,c=0;
       for(int i=31;i>=0;i--)
       {
           if(n &(1<<i))
           {
               c=i+1;
               break;
           }
       }
       ans= 2*c+1;
       cout<<ans<<endl;



    }
}

