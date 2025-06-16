
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
        if(a>=b && c>=b)
        {
            cout<<"Gellyfish"<<endl;

        }
        else if(a<d)
        {

            cout<<"Flower"<<endl;
        }
        else if(d<=c)
        {
            cout<<"Gellyfish"<<endl;

        }
        else
        {
            cout<<"Flower"<<endl;
        }

    }
}

