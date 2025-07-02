
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j,k;
        cin>>n>>j>>k;
        // vector<int>vec;
        int vec[n];
         int a,c;
         for(int i=0;i<n;i++)
         {
//             cin>>c;
//             vec.push_back(c);
       cin>>vec[i];
         }
         a=vec[j-1];
         int cnt=0;
        sort(vec,vec+n);
      if(k==1)
      {
          if(a==vec[n-1])
          {
              cout<<"YES"<<endl;
          }
          else
          {
              cout<<"NO"<<endl;
          }
      }
      else
      {
         
          
              cout<<"YES"<<endl;
          
         
      }

    }
}


