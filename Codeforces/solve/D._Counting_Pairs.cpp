#include <algorithm>
#include <iostream>
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
#define all(a) a.begin(), a.end()
void solve()
{
	ll n, x, y;
	std::cin >> n >> x >> y;
	std::vector<ll> vec(n);
	ll sum = 0;
	for (auto &it : vec)
	{
		std::cin >> it;
		sum += it;
	}
	std::sort(all(vec));
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		ll target = sum - vec[i];
		ll l = sum - y;
		ll r = sum - x;
	}
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
