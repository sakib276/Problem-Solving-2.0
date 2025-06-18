
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
       for(int i=0;i<n;i++)
       {
           cin>>ar[i];
       }
         sort(ar, ar + n);
         int j=0,k=n-1;
         int c=0,p;
//         while(1)
//         {
//             int p=ar[j]+ar[k];
//             if(p%2==0)
//             {
//
//                 break;
//             }
//             else
//             {
//                 c++;
//                 j++;
//                 p=ar[j]+ar[k];
//                 if(p%2==0)
//                 {
//                    break;
//                 }
//                 else
//                 {
//                     c++;
//                 }
//
//                    k--;
//
//
//                 p=ar[j]+ar[k];
//                 if(p%2==0)
//                 {
//                    break;
//                 }
//                 else
//                 {
//                     c++;
//                 }
//
//
//             }
//
//
//         }

//       while(j<=k)
//       {
//           p=ar[j]+ar[k];
//
//           if(p%2==0)
//           {
//               break;
//           }
//           else
//           {
//               c++;
//               j++;
//               k--;
//           }
//           if(j==k)
//           {
//               break;
//           }
//       }
//
  int mini = INT_MAX;

        int cnt=0;
           for(int i=n-1;i>=0;i--)
         {
             if((ar[0]+ar[i])%2==0)
             {
                 break;
             }
             else
             {
                 cnt++;
             }
         }


         int ans= min(mini,cnt);
          cnt=0;
         for(int i=0;i<n;i++)
         {
             if((ar[n-1]+ar[i])%2==0)
             {
                 break;
             }
             else
             {
                 cnt++;
             }
         }





          ans= min(ans,cnt);
         cout<<ans<<endl;

    }
}

