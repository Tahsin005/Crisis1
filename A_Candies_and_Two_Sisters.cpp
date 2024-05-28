#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
     int tt; cin >> tt; while (tt--) {
          ll n; cin >> n;

          ll ans = n + (n % 2 == 1);

          // cout << ans << endl;
          cout << (ans / 2LL) - 1 << endl;

     }
     return 0;
}