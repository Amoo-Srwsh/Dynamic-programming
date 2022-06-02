// in the name of Allah
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
  int TC; cin >> TC;
  while (TC--) {
       int l; cin >> l;
       string s; cin >> s;
       if ((s[l-1]=='0'&&s[1]=='0'&&s[l-2]=='2'&&s[0]=='2') ||
           (s[l-1]=='0'&&s[l-3]=='0'&&s[l-2]=='2'&&s[0]=='2') ||
	   (s[l-1]=='0'&&s[l-3]=='0'&&s[l-2]=='2'&&s[l-4]=='2') ||
	   (s[0]=='2'&&s[2]=='2'&&s[1]=='0'&&s[3]=='0') ||
	   (s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[l-1]=='0') ||
	   (s[l-1]=='0'&&s[l-2]=='2'&&s[l-3]=='0'&&s[0]=='2'))
	   cout << "YES" << endl;
       else cout << "NO" << endl;
  }
}
