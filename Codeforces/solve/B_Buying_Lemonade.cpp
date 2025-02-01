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
	ll n, k;
	std::cin >> n >> k;
	std::vector<ll> a(n);
	for (auto &it : a)
		std::cin >> it;
	std::sort(all(a));
	ll cnt = 0;
	ll cost = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] -= cost;
		if (k <= (n - i) * a[i])
		{
			cnt += k;
			break;
		}
		k -= (n - i) * a[i];
		cnt += (n - i) * a[i];
		cnt++;
		cost += a[i];
	}
	std::cout << cnt << "\n";
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
