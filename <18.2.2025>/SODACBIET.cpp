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

ll n, a[N];
void read()
{
	cin>>n;
	FOR(i,1,n) {
		cin>>a[i];
	}
}
int check(int n) {
	vi a;
	while(n != 0) {
		int cur = n % 10;
		if(cur % 2 == 0) {
			return 0; //phat hien so chan
		} 
		n /= 10;
	}
	return 1;
}
void solve()
{
	ll ma = 0;
	ll dem = 0;
	FOR(i,1,n) {
		if(check(a[i])) {
			dem++;
			ma = max(ma, dem);
		}
		else {
			dem = 0;
		}
	}
	cout<<ma<<endl;
}
int main()	
{
	ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	#define task "SODACBIET"
	if(fopen(task".inp","r")){
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }

    int t = 1;
    while(t--) {
        read();
        solve();
    }

    return 0;
}
/* Duis */