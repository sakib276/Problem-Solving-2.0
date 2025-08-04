
#include<bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,ans=0,x=1;
        cin>>n>>k;
       vector<long long int>ar(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        multiset<long long> mp;

        for(auto it: ar){
            mp.insert(it);
        }
        long long y= upper_bound(all(ar),k)-ar.begin();
        ans=ans+(n-y);
        y--;
        if(y<0)
        {
            cout<<n<<endl;
            continue;
        }

        for(long long i=y;i>=0;i--)
        {
            if(x*ar[i]>k)
            {
                ans++;
            }
            else {
                x=x*2;
            }
        }
        cout<<ans<<endl;
    }
}

