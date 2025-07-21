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
        int ar[n];
        int c=0;
        int ind=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n;)
        {
            if(ar[i]==0)
            {

                ind++;

            }

            if(ar[i]==1 && ind!=0)
            {
                ind=0;
            }
            if(k==ind)
            {
              i=i+2;
              c++;
              ind=0;
            }
            else
            {
                i++;
            }


        }
        cout<<c<<endl;
    }
}

