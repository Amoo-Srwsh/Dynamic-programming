// in the name of Allah
// https://codeforces.com/problemset/problem/1686/B
#include <bits/stdc++.h>
using namespace std;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1")
int main() {
   sync;
   int TC; cin >> TC;
   while (TC--) {
        int n; cin >> n;
	vector<int>A(n), dp(n);
	for (int i = 0; i < n; i++) cin >> A[i];
	for (int i = n-2; i >= 0; i--) {
	     if (A[i]>A[i+1]) dp[i] = 1;
	     else dp[i] = 0;
	}
	int i = 0, ans = 0;
	while (i < n) {
	     if (dp[i]) ans++, i += 2;
             else i++;
	}
	cout << ans << endl;
   }
   /* second solution
    int n, ans = 0; cin >> n; 
    vector<int>A(n); 
    for (int i = 0; i < n; i++) cin >> A[i]; 
    for (int i = 0; i < n-1; i++) if (A[i]>A[i+1]) ans++, i++; 
    cout << ans << endl;
   */
}
