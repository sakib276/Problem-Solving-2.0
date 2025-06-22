#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int a,b,c;
        cin>>a>>b>>c;
        int d,e;
        int ans=0;
        if(b<2 || c<4)
        {
            cout<<0<<endl;
        }
        else
        {
          while(a!=0)
          {
              ans=ans+1+2+4;
              a--;
              b=b-2;
              c=c-4;
              if(b<2 || c<4)
        {
            break;
        }

          }
          cout<<ans<<endl;
        }

    
}

