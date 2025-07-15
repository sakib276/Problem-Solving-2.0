#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int sum=0;
    int two=0,one=0;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]==200)
        {
            two++;
        }
        else
        {
            one++;
        }
        
    }
    if(n==1) cout<<"NO"<<endl;
    else
    {
        if(two!=0 && one==0)
        {
            if(n%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(two==0 && one!=0)
        {
            if(n%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {

                sum=sum+ar[i];
               
            }
            
            if(sum%200==0 && sum%100==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}

