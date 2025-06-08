
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long int a,b,c,d;
      cin>>a>>b>>c>>d;
      if(b==d)
      {
          if(a>c)
          {
              cout<<"Gellyfish"<<endl;

          }
          else
          {
              cout<<"Flower"<<endl;

          }
      }
      else if(b>d)
      {
          cout<<"Gellyfish"<<endl;
      }
      else
      {
          cout<<"Flower"<<endl;
      }

    }
}

