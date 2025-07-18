
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;

        cin >> num;

        int minDigit = 9;



        while (num > 0)
        {
            int digit = num % 10;
            if (digit < minDigit)
            {
                minDigit = digit;
            }
            num /= 10;
        }

        cout <<  minDigit << endl;
    }
}


