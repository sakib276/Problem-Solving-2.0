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
        int one=0, two=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(ar[i]==0) one++;
            else two++;
        }
        int f=0;
        if(one==n || two==n)
        {
            f++;
        }
        else if(ar[0]==0 && ar[1]!=1)
        {
            //cout<<"NO"<<endl;
            f++;
        }
        else   if(ar[n-2]==0 && ar[n-1]==0)
        {
            f++;

        }
        else
        {
            for(int i=1; i<n-1; i++)
            {
                if(ar[i-1]==0 && ar[i]==0)
                {
                    f++;
                    break;
                }

            }
        }

        if(f==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}

