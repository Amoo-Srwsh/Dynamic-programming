// in the name of Allah
// https://codeforces.com/contest/1678/problem/B2
#include<bits/stdc++.h>
using namespace std;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1")

typedef long long ll;
typedef pair<ll,ll> PII;

inline ll read(){
	ll x=0;char ch;bool f=true;
	for(ch=getchar();!isdigit(ch);ch=getchar())if(ch=='-')f^=f;
	for(;isdigit(ch);ch=getchar())x=(x<<3)+(x<<1)+(ch^48);
	return f?x:-x;
}

const int N=2e5+7;
const int INF=1e9;
char s[N];
int c[N];
PII dp[N][2];
void solve(){
    int n = read(); 
    scanf("%s",s+1); 
    for(int i = 1; i <= n; i++) s[i] -= '0'; 
    for(int i = 1; i <= n/2; i++) c[i] = s[i*2]+s[i*2-1]*2; 
    for(int i = 1; i <= n/2; i++) 
	for(int j = 0; j < 2; j++) dp[i][j] = {INF,INF};
    for(int i = 1; i <= n/2; i++)
	for(int j = 0; j < 2; j++) {
	    int cc=c[i],dd=j?3:0,cnt=((dd%2)^(cc%2))+((dd/2)^(cc/2));
	    for(int k = 0; k < 2; k++)
	        dp[i][j] = min(dp[i][j],{dp[i-1][k].first+cnt,dp[i-1][k].second+(j!=k)});
	}
    PII ans=min(dp[n/2][0],dp[n/2][1]);
    cout<<ans.first<<" "<<ans.second+1<<"\n";
}

int main() {
   int TC; TC = read();
   while (TC--) solve();
   return 0;
}
