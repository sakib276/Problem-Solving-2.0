
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,x,y;
        cin>>a>>x>>y;
        int b,c,d,e;
        b=abs(a-x);
        c=abs(a-y);
        d=abs(x-y);
       // if((b>=d && c>=d)||(b>=a && c!>=d) || (b!>=a && c>=d) )
    //   if ((b >= d && c >= d) || (b >= a && c < d) || (b < a && c >= d))
       if ((b >= d && c >= d) || (b >= d && c < d) || (b < d && c >= d))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

