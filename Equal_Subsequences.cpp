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
        for(int i=1;i<=n;i++)
        {
            if(i<=k)
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }
        }
        cout<<endl;
    }
}

