
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int ar[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(ar[i] > ar[i + 1])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        int ar[n];
        for(long long int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        if(isSorted(ar, n))
        {
            cout << "YES" << endl;
        }
        else if(k<2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }



    }
}

