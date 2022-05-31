// in the name of Allah
// https://codeforces.com/problemset/problem/1538/A
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
       map<int, int>A;
       for (int i = 1; i <= n; i++) {
	    int a; cin >> a, A[a]=i;
       }
       int x, y; if (A[n]>A[1]) y=A[n], x=A[1]; else y=A[1], x=A[n]; n++;
       cout << min((x-0)+(n-y), min((y-x)+(n-y), (y-x)+(x-0))) << endl;
  }
}
