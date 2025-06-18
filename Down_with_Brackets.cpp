
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int n=s.size();
      int f=0,c=0,k=0;
      for(int i=0;i<n;i++)
      {
          if(s[i]=='(')
          {
              f++;

          }
          else
          {
              f--;
          }
          if(f==0)
            k++;

      }

      if(k>1)
      {
          cout<<"YES"<<endl;

      }
      else
      {
//(()())
           cout<<"NO"<<endl;
      }
    }
}

