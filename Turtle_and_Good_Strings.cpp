
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       string s;
       cin>>n;
       cin>>s;

       if(n<2)
       {
           cout<<"NO"<<endl;
       }
       else if(s[0]==s[n-1])
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }


    }
}

