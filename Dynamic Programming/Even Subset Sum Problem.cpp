// in the name of Allah
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
       vector<int>A(n);
       for (int i = 0; i < n; i++) cin >> A[i];
       int F = 1;
       for (int i = 0; i < n && F ; i++) {
	    if (A[i]%2 == 0) {
		cout << "1\n" << i + 1 << endl;
		F = 0;
	    }
	    else if (i<n-1 && A[i]&1&& A[i+1]&1) {
		cout << "2\n" << i + 1 << " " << i + 2 << endl;
		F = 0;
	    }
       }
       if (F) cout << "-1" << endl;
  }
}
