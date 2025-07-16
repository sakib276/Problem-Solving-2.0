#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n+4];
//    long long int b[n+5];
//    long long int c[n+4];
    vector<long long int> b(n+5),c(n+5);
    long long int d=0,e=0,f,g;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
        d=d+a[i];
        b[i+1]=d;

    }
    sort(a,a+n);
      for(long long int i=0;i<n;i++)
    {

        e=e+a[i];
        c[i+1]=e;

    }
    int k;
    cin>>k;
    long long int x,y,z;
    while(k--)
    {

        cin>>x>>y>>z;
        if(x==1)
        {
            cout<<b[z]-b[y-1]<<endl;
        }
        else
        {
            cout<<c[z]-c[y-1]<<endl;
        }
    }


}

