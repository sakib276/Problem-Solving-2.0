#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, a, b, c,d,e,f;
    cin >> n >> a >> b >> c;

    vector<int> ar = {a, b, c};
    sort(ar.begin(), ar.end());

    int cnt = -1;


    for(int i=n/ar[0]; i>=0; i--)
    {
        d=n- i*ar[0];
        for(int j=d/ar[1] ; j>=0; j--)
        {
            e= d - j*ar[1];
            if(e%ar[2]==0)
            {
                f= i+j+(e/ar[2]);
                cnt= max(cnt,f);
            }
        }
    }
    cout << cnt << endl;

    return 0;
}

