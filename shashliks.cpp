
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        int ans=0;
        if(x>y)
        {
            swap(x,y);
            swap(a,b);
        }
        if(a<=k)
        {
            ans=(k-a)/x;
            ans++;
            k= k -ans*x;
        }
        if( k>=b)
        {
            ans= ans+ ((k-b)/y+1);
        }
        cout<<ans<<endl;
    }

}

