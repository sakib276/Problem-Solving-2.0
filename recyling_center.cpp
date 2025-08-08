
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k, ans = 0, x = 1;
        cin >> n >> k;
        vector<long long> ar(n);
        for (long long i = 0; i < n; i++) {
            cin >> ar[i];
        }
        sort(all(ar));
        long long y = upper_bound(all(ar), k) - ar.begin();
        ans += (n - y);
        y--;
        if (y < 0) {
            cout << n << endl;
            continue;
        }
        for (long long i = y; i >= 0; i--) {
            if (x * ar[i] > k) {
                ans++;
            } else {
                x *= 2;
            }
        }
        cout << ans << endl;

    }
}

