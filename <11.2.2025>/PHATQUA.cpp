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

ll a,b;
void read()
{
	cin>>a>>b;
}
void sub1() // DPT O(min(a,b))
{
	int dem = 0;
	FOR(i,1,min(a,b)) {
		if(a % i == 0 and b % i == 0) {
			dem++;
		}
	}
	cout<<dem;
}
void sub2() //DPT O(sqrt(__gcd(a,b)))
{
	int dem = 0;
	FOR(i,1,__gcd(a,b)) {
		if(a % i == 0 and b % i == 0) {
			dem++;
		}
	}
	cout<<dem;
}
void solve()
{
	
}
int main()	
{
	ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	
	#define task "PHATQUA"
	if(fopen(task".inp","r")){
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }
    
    int t = 1;
    while(t--) {
    	read();
    	if(a, b <= 1e5) sub1();
    	else if(a,b >1e5) sub2();
	}
	return 0;
}
/* Duis */