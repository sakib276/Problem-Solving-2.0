
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 3)
        {
            if (s[1] == s[0] || s[2] == s[1])
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {

            string str = "";
            str += s[0];
            str += s[n - 1];

            string news = s.substr(1, n - 2);

            int flag = 0;
            int j = 0;

            for (int i = 1; i <= n - 2; i++)
            {
                if (str.find(news[j]) != string::npos)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    str += news[j];
                    j++;
                }
            }

            if (flag)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}

