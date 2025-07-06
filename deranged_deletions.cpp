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
        bool f=true;
        if (is_sorted(arr, arr + n))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout<<n-1<<endl;
            for(int i=1;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}

