#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n;
    cin>>n;
    long long  int arr[n];
    for(long long int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    long long int cnt=0;
    sort(arr, arr + n);
    long long int left= arr[0];
    long long int right = arr[n-1];

    if(n==2 || n<2)
    {
        cout<<0<<endl;
    }
    else
    {
        for(long long int i=0; i<n; i++)
        {

            if(left< arr[i] && right>arr[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }


}

