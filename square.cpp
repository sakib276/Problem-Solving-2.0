#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  n;
        string s;
        cin>>s;
        
     n= stoi(s); 
     
         int root = sqrt(n);
    if (root * root == n)
    {
      if(root%2==0)
      {
          cout<<root/2<<" "<<root/2<<endl;
      }
      else
      {
          cout<<root/2<<" "<<root/2 +1<<endl;
      }
    }
    else
    {
        cout<<-1<<endl;
    }
    }
   return 0;
}

