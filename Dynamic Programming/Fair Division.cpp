// in the name of Allah
#include <bits/stdc++.h>
using namespace std;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1")
#define inarr(A, SIZE) for (int i = 0; i < SIZE; i++) cin >> A[i];
void solve() {
  int n;
  cin >> n;
  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    if (c == 1) {
      cnt1++;
    } else {
      cnt2++;
    }
  }
  if ((cnt1 + 2 * cnt2) % 2 != 0) {
    cout << "NO\n";
  } else {
    int sum = (cnt1 + 2 * cnt2) / 2;
    if (sum % 2 == 0 || (sum % 2 == 1 && cnt1 != 0)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
// First solution (By:https://codeforces.com/profile/Supermagzzz)
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  /* Second Solution (My solution)
  int TC; cin >> TC;
  while (TC--) {
       int x = 0, y = 0, n; cin >> n;
       for (int i = 0; i < n; i++) {
	    int a; cin >> a;
	    if (a==1) x++;
	    else y++;
       }
       y = ((y%2==0)?0:1);
       if (x%2==0&&x>=y) cout << "YES" << endl;
       else cout << "NO" << endl;
  }
  */
}
