
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  int n;
        cin>>n;
        long long ssum=0;
        long long int sum=0;
        long long int k=1,m;
        long long int power = 1;
         sum = n * (n + 1) / 2;
            while (power <= n)
            {
                sum = sum- 2*power;
                power = power*2;
            }

       //  long long int ans= abs(sum-ssum);
            cout<<sum<<endl;




    }
    return 0;
}


