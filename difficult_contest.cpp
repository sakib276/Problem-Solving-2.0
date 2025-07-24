
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin >> s;
        if (s.find("FFT") != string::npos || s.find("NTT") != string::npos)
        {
            sort(s.begin(), s.end(), greater<char>());
            cout << s<<endl;
        }
        else
        {
            cout<<s<<endl;
        }

    }
    return 0;
}

