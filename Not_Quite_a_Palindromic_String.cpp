
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int one=0,two=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                 one++;
            }

            else if(s[i]=='1')
            {
                 two++;
            }


        }


//
//        cout<<" one is : "<<one<<endl;
//        cout<<" two is : "<<two<<endl;
//        cout<<" o is : "<<o<<endl;
//        cout<<" t is : "<<t<<endl;
//        cout<<" ans  is : "<<ans<<endl;


     int aa= n/2-k;
     int o=one-aa;
     int t=two-aa;
     int ans=o/2+t/2;
     if(aa<=one && aa<=two)
     {
         if(ans ==k)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }



    }
}

