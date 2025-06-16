
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int A[n];
        for( i=0; i<n; i++)
        {
            cin>>A[i];
        }
        bool flag=false ;
        int f=0;

        for(i=2; i<n; i++)
        {
            if((A[1]-A[0])!=(A[i]-A[i-1]))
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout<<"no"<<endl;
            continue;
        }

        if((2*A[0]-A[1])>=0 && (A[0]+(A[1]-A[0])*n)>=0)
        {
            if((2*A[0]-A[1])%(n+1)==0)
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
}

