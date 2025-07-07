#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,x,y;
        long long int ans;

        cin>>a>>b>>x>>y;

        if(a==b)
        {
            cout<<0<<endl;
        }
        else if(a<b)
        {
            long long int diff=(b-a);
            long long int ev= (b-1)/2 - (a-1)/2;
            long long int od= diff-ev;
            if(x>y)
            {
                ans= ev*y + od*x;
            }
            else
            {
                ans= diff*x;
            }
            cout<<ans<<endl;
        }
        else
        {
            if(a>(b+1))
            {
                cout<<-1<<endl;
            }
            else
            {
                if(a%2!=0)
                {
                    cout<<y<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
        }

    }
}

