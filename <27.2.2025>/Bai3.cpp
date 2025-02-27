
#include <bits/stdc++.h>
using namespace std;

/**
 *    author:  mr_secret
**/

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using str = string;
using ld = long double;
using db = double;
using vi = vector<int>;
using vl = vector<ll>;

///--------------------------------

#define           F   first
#define           S   second
#define          pb   push_back
#define          lb   lower_bound
#define          ub   upper_bound
#define          PI   M_PI
#define        endl   '\n'
#define        TIME   1.0 * clock() / CLOCKS_PER_SEC
#define    _ngthai_   int main()
#define  FOR(i,a,b)   for(ll i=a;i<=b;i++)
#define FORD(i,a,b)   for(ll i=b;i>=a;i--)

///--------------------------------

#ifdef LOCAL
    #include "deb/debug.h"
#else
    #define debug(...) 2807
#endif

///--------------------------------


const ll N=1e6+5;
const ll MOD1=1e9 + 3, MOD2 = 1e9 + 7; //998244353;
const ll oo = 2e9;
const ll INF = 1e18;

///--------------------[PROBLEM SOLUTION]--------------------///

void solve()
{
	ll n;
	ll t = 0, i = 0, a;
	cin>>n;
	while(n != 0) {
		i++;
		for(int j = 1; j <= i; j++) {
			if(n == 0) {
				break;
			}
			else {
				if(j == 1) {
					a = t % i;
					t += i - a;
				}
				else {
					t += i;
				}
				n--;
			}
		}
	}	
	cout<<t;
}

_ngthai_	
{
	ios_base::sync_with_stdio(0); 
	cin.tie(0); cout.tie(0);

	#define PROBLEM "Bai3"

	if(fopen(PROBLEM".inp", "r")){
        freopen(PROBLEM".inp", "r", stdin);
        freopen(PROBLEM".out", "w", stdout);
    }

    constexpr bool MULTI_TEST = 0;

    int t = 1;
    if (MULTI_TEST) cin >> t;

    while(t--) {
        solve();

        // cerr << setprecision(3) << fixed;
        // cerr << "[" << 1.0 * clock() / CLOCKS_PER_SEC << "s]  ";
    }

    return 0;
}
/* Duis */