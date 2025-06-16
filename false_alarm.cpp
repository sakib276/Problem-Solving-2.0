
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ,k;
        cin>>n>>k;
        int arr[n];
int ff ;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                ff = i;

                break;
            }
        }
        ff++;

   int fb;

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                fb = i;


                break;
            }
        }
       fb++;
//       cout<<"fb is : "<<fb<<endl;
//       cout<<"ff is : "<<ff<<endl;

        int ans= abs(fb -ff)+1;
        if(ans<=k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}

