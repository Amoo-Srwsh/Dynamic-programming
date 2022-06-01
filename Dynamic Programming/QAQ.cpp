// in the name of Allah
// https://codeforces.com/problemset/problem/894/A
#include <bits/stdc++.h>
using namespace std;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1")
#define inarr(A, SIZE) for (int i = 0; i < SIZE; i++) cin >> A[i];
int main() {
  sync;
  string s; cin >> s;
  int l = s.length();
  vector<int>x(l), y(l);
  for (int i = 0, cnt = 0; i < l; i++) {
       if (s[i]=='Q') cnt++;
       x[i] += cnt;
  }
  for (int i = l-1, cnt= 0; i >= 0; i--) {
       if (s[i]=='Q') cnt++;
       y[i] += cnt; 
  }
  int ans = 0;
  for (int i = 0; i < l; i++) if (s[i]=='A') ans+=y[i]*x[i];
  cout << ans;
}
