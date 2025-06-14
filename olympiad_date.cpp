
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
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int z=0,o=0,t=0,th=0,f=0;
        int flag=0;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==0)
            {
                z++;
            }
            else if(arr[i]==1)
            {
                o++;
            }
            else if(arr[i]==2)
            {
                t++;
            }
            else if(arr[i]==3)
            {
                th++;
            }
            else if(arr[i]==5)
            {
                f++;
            }
            if(z>=3 && o>=1 && t>=2 && th>=1 && f>=1)
            {
                ans=i+1;
                flag++;
                break;
            }


        }
        if(flag>0)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}

