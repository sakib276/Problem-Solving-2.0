
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
        int a=1;
       // int b=n;
        int k=1;
        for(int i=1; i<=n; i=i+2)
        {
            cout<<i<<" ";
        }

        vector<int>b;
        for(int i=2; i<=n; i=i+2)
        {
            b.push_back(i);
        }
        reverse(b.begin(),b.end());
        for(auto c: b)
        {
            cout<<c<<" ";
        }
    }
}

