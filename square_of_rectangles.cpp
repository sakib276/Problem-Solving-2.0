
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,l2,l3,b3,b2,b1;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;
        int a= (l1*b1)+(l2*b2)+(l3*b3);
       // cout<<" a is : "<<a<<endl;

        int root =sqrt(a);
       // cout<< " root is : "<<root <<endl;
        if(root * root == a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

