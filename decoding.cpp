
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, str;
    cin >> s;
    str.resize(n);  
    int a, mid;

    if (n % 2) 
    {
        a = 1;
        mid = (n - 1) / 2;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                str[mid] = s[i];
                mid = mid - a;
            }
            else
            {
                str[mid] = s[i];
                mid = mid + a;
            }
            a++;
        }
    }
    else 
    {
        a = 1;
        mid = (n - 1) / 2;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                str[mid] = s[i];
                mid = mid + a;
            }
            else
            {
                str[mid] = s[i];
                mid = mid - a;
            }
            a++;
        }
    }

    cout << str << endl;
}


