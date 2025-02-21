/**
 *    author:  mr_secret
 *    created:    
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

ll n,u,v,a[N],q,pre[N], suf[N];
void sub1()
{
	cin>>n>>q;
	FOR(i,1,n) {
		cin>>a[i];
	}
	while(q--) {
		ll w = 0;
		cin>>u>>v;
		if(u < v) {
			for(int i = u; i < v; i++) {
				if(a[i] > a[i + 1]) {
					w += (a[i] - a[i + 1]);
				}
 			}
		}
		else if(u > v) {
			for(int i = u; i > v; i--) {
				if(a[i] > a[i - 1]) {
					w += (a[i] - a[i - 1]);
				}
			}
		}
		cout<<w<<endl;
	}
}
void sub2()
{
	cin>>n>>q;
	FOR(i,1,n) {
		cin>>a[i];
	}
	ll ma = 0;
	FOR(i,2,n) {
		pre[i] = pre[i - 1] + max(ma, a[i - 1] - a[i]);
	}
	FORD(i,1,n-1) {
		suf[i] = suf[i + 1] + max(ma, a[i + 1] - a[i]);
	}
	while(q--) {
		cin>>u>>v;
		if(u < v) {
			cout<<pre[v] - pre[u]<<endl;
		}
		else cout<<suf[v] - suf[u]<<endl;
	}
}
int main()	
{
	ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	#define task "TASK"
	if(fopen(task".inp","r")){
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }

    int t = 1;
    sub2();
}
/* Duis */