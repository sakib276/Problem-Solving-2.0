
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,l2,l3,b3,b2,b1;
        int e,f,g,h;
        int cnt=0;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;
        int a= max(l1, max(l2, l3));
        int b= max(b1, max(b2, b3));
        if(l1==l2==l3==b1==b2==b3)
        {
            cnt=0;
        }
        else if(a>b)
        {
            if(l1==l2==l3)
            {
                if(l1==(b1+b2+b3))
                {
                    cnt++;
                }

            }
            else
            {
                if(l1==a)
                {
                    e=l2+l3;
                    if(e==l1)
                    {
                        cnt++;
                    }
                }
                else if(l2==a)
                {
                    e=l1+l3;
                    if(e==l2)
                    {
                        cnt++;
                    }
                }
                else if(l3==a)
                {
                    e=l2+l1;
                    if(e==l3)
                    {
                        cnt++;
                    }
                }
            }
        }
        else
        {
                if(b1==b2==b3)
            {
                if(b1==(l1+l2+l3))
                {
                    cnt++;
                }

            }
            else
            {
                 if(b1==b)
                {
                    e=b2+b3;
                    if(e==b1)
                    {
                        cnt++;
                    }
                }
                else if(b2==b)
                {
                    e=b1+b3;
                    if(e==b2)
                    {
                        cnt++;
                    }
                }
                else if(b3==b)
                {
                    e=b2+b1;
                    if(e==b3)
                    {
                        cnt++;
                    }
                }
            }
        }
     if(cnt==0)
     {
         cout<<"NO"<<endl;
     }
     else
     {
         cout<<"YES"<<endl;
     }
    }
}

