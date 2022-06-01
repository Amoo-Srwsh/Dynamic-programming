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
       int n; cin >> n;
       vector<int>A(n); inarr(A, n);
       set<int>s1, s2;
       for (int i = 0; i < n; i++) {
	    if (A[i]&1) s1.insert(i+1);
	    else s2.insert(i+1);
       }
       if (s2.size()) cout << "1\n" << *s2.begin() << endl;
       else if (s1.size()>1) {
	    cout << "2\n";
	    int k = *s1.begin();
	    s1.erase(k);
	    cout << k << " " << *s1.begin() << endl;
       }
       else cout << "-1" << endl;
  }
}
