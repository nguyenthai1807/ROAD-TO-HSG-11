/**
 *    author:  mr_secret
 *    created: 04.01.2025 21:35:00     
**/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef vector<int> vi;
typedef vector<ll> vll;

#define db double
#define fl float
#define str string
#define endl '\n'
#define lb lower_bound
#define ub upper_bound 
#define pb push_back
#define TIME 1.0 * clock() / CLOCKS_PER_SEC
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FORD(i,a,b) for(ll i=b;i>=a;i--)
#define PI M_PI

const ll N=1e6+5;
const ll MOD1=1e9 + 3, MOD2 = 1e9 + 7; 
const ll oo = 2e9;
const ll PR = 1e7 + 1;
ll n;
ll nt[PR];

void sangnt() {
	int M = 1e7;
	for(int i = 1; i <= M; i++) {
		nt[i] = 1;
	}
	nt[1] = 0;
	for(int i = 1; i * i <= M; i++) {
		if(nt[i] == 1) {
			for(int j = i * i; j <= M; j += i) {
				nt[j] = 0;
			}
		}
	}
}

void read()
{
	cin>>n;
}
// int dem(int n) {
// 	int cnt = 0;
// 	FOR(i,1,n) {
// 		if(n % i == 0) {
// 			cnt++;
// 		}
// 	}
// 	return cnt;
// }
// int find(int n) {
// 	ll k = sqrt(n);
// 	if(p * p < n) k++; {
		
// 	}
// }
void solve()
{
//	int ans;
//	int k = sqrt(n);
//	if(k * k == n) cout<<n;
//	else {
//		ans = (k+1) * (k+1);
//		cout<<ans;
//	}
    ll can = sqrt(n);
    while(true) {
    	if(nt[can] and can * can >= n) break;
    	can++;
    }
    cout<<can*can;
}
int main()	
{
	ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	
	#define task "NGUYENTO"
	if(fopen(task".inp","r")){
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }
    sangnt();
    int t = 1;
    while(t--) {
    	read();
    	solve();
	}
	return 0;
}
/* Duis */