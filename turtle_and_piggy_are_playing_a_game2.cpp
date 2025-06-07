
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
        int x;
        vector<int>ans;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        // double result = ceil((double)n / 2);
        int res=ceil(n/2);
        int k=0;
//       for(int i=0;i<n-1;i++)
//       {
//           if(k%2!=0)
//           {
//               x=max(ar[i],ar[i+1]);
//               ar[i]=x;
//               k++;
//               ans.push_back(x);
//           }
//           else if(k%2==0)
//           {
//                x=min(ar[i],ar[i+1]);
//               k++;
//               ar[i]=x;
//               ans.push_back(x);
//
//           }
//       }
//       int s=ans.size();
        res=res+1;
        if(n%2==0)
        {
            int p=n/2;
            cout<<ar[n-p]<<endl;
        }
        else
        {
            cout<<ar[n-res]<<endl;
        }




    }
}

