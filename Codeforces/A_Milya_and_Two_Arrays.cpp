#include <iostream>
#include <set>
#include <vector>
#ifdef DEBUG
#include "debug.hpp"
#endif /* DEBUG */
#ifndef DEBUG
#define dbg(...)
#endif // /* DEBUG */
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
void solve()
{
	int n;
	std::cin >> n;
	std::set<ll> set;
	for (int i = 0; i < n; i++)
	{
		ll val;
		std::cin >> val;
		set.insert(val);
	}
	int s = set.size();
	set.clear();

	for (int i = 0; i < n; i++)
	{
		ll val;
		std::cin >> val;
		set.insert(val);
	}
	s += set.size();
	if (s > 3)
		std::cout << "YES\n";
	else
		std::cout << "NO\n";

}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	int n = t;
	while (t--)
	{
#ifdef DEBUG
		std::cerr << "#Case " << n - t << " -------------------\n";
#endif // DEBUG
		solve();
	}
	return 0;
}
