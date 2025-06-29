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
        if((l1==l2)&& (l1==l3)&& (l1==b1)&&(l1==b2)&&(l1==b3))
        {
            cnt=0;
        }
        else if(a>b)
        {
             if((l1==l2) &&(l1==l3))
            {
                if(l1==(b1+b2+b3))
                {
                    cnt++;
                }

            }
            else if((l2+l3 == l1 && b2==b3&& b1+b2==l1))
            {


                    cnt++;

            }
        }
        else
        {

            if((b1==b2) &&(b1==b3))
            {

                if(b==(l1+l2+l3))
                {
                    cnt++;

                }

            }
            else if((b1==b2+b3 && l2==l3 && l1+l2==b1))
            {
                    cnt++;


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
    return 0;
}

