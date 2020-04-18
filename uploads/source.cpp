#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
const double PI = acos(-1.0);
const double EPS = (1e-9);
typedef long long ll;
typedef unsigned long long ull;
#define flush fflush(stdout), cout.flush()
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).rbegin()),((v).rend())
#define clr(v,line) memset(v,line,sizeof(v))
#define rep(i,n) for(int(i)=0;(i)<(int)(n);(i)++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define RT(x) return cout<<x, 0;
//#define lcm(a,b) (a*(b/__gcd(a,b)))
#define P 1000000007
#define endl '\n'
const int dx[] = {1,-1,0,0,1,-1,1,-1};
const int dy[] = {0,0,1,-1,1,-1,-1,1};
const int dxhorse[] = {-2,-2,-1,-1,1,1,2,2};
const int dyhorse[] = {1,-1,2,-2,2,-2,1,-1};
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
	cerr << name << " : " << arg1 <<endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
	const char* coma = strchr(names + 1, ',');cerr.write(names, coma - names) << " : " << arg1<<" | ";__f(coma+1, args...);
}
#else
#define trace(...)
#endif
 
void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
std::mt19937 rng((int) std::chrono::steady_clock::now().time_since_epoch().count());

vll divs, squares;

void printDivisors(ll n) 
{
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i==0) 
        { 
            if (n/i == i)
                divs.push_back(i); 
            else
                divs.push_back(i), divs.push_back(n/i); 
        } 
    }
} 

void perfectSquares()
{
	for(ll i = 2; i <= sqrt(1000000000000); i++)
	{
		squares.push_back(i * i);
	}
}

int main(int argc, char const *argv[])
{
	file();
	fast();
	ll n; cin>>n;
	printDivisors(n);
	perfectSquares();
	ll mx = 0;
	for(auto i:divs)
	{
		ll limit = upper_bound(all(squares), i)-squares.begin();
		bool f = 0;

		for(int j = 0; j < limit + 1 and !f; j++)
		{
			if(squares[j])
			f|=(i % squares[j]==0);
		}
		if(!f)mx=max(mx, i);
	}
	cout<<mx;

}