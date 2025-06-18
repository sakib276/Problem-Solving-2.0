
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {set<int> st;

        int f=0;
        long long int c=1;
        long long int n;
        cin>>n;
        int tem;
        long long ar[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>ar[i];


        }
        tem=ar[0];
        for(long long int i=0;i<n;i++)
        {
            if(ar[i]>tem+1)
            {
                c++;
                tem=ar[i];
            }
        }
        cout<<c<<endl;
    }
}

