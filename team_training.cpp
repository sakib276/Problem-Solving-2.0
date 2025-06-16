
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
         vector<int>vec;
         int a=0,c;
         for(int i=0;i<n;i++)
         {
             cin>>c;
             vec.push_back(c);
         }
         int cnt=0;
        sort(vec.begin(),vec.end());
        for(int i=n-1;i>=0;i--)
        {
            a++;
            if(vec[i]*a>=x)
            {
                cnt++;
                a=0;
            }
        }
        cout<<cnt<<endl;

    }
}

