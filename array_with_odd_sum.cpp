
#include<bits/stdc++.h>
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
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int sum=0,od=0,ev=0;
        for(int i=0;i<n;i++)
        {
        if(ar[i]%2==0)
        {
            ev++;
        }
        else
        {
           od++;
        }
        }
        if(ev == od)
        {
            cout<<"YES"<<endl;
        }
        else if( ev !=0 && od !=0)
        {
            if(ev>od)
            {
                cout<<"NO"<<endl;
            }
            else 
            {
                int a=od-ev;
                if(a%2==0)
                {
                    cout<<"NO"<<endl;
                }
                else 
                {
                    cout<<"YES"<<endl;
                }
            }
        }
        else if( ev!=0 & od==0)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            if(od%2==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }


    }
     return 0;
}
