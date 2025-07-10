#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int cnt=0;
        sort(arr, arr + n);
        if(n==2 || n<2)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=1;i<n-1;i++)
            {
                if((arr[i]<arr[i+1] && arr[i]!=arr[i+1]) && (arr[i]>arr[i-1] && arr[i]!=arr[i-1]))
                {
                    cnt++;
                }

            }
         cout<<cnt<<endl;
        }
       
    
}

