#include <algorithm>
#include <cstdlib>
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
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
void solve()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (auto &it : a) std::cin >> it;

	bool ok = true;
	bool parity = true;
	for (int i = 1; i < n; i++)
	{
		if (a[i] != a[i - 1])
			ok = false;
		if ((a[i] & 1) != (a[i - 1] & 1))
			parity = false;
	}
	if (ok)
	{
		std::cout << "0\n";
		return;
	}
	int x = std::abs(a[0] - a[n - 1]);
	for (int i = 0; i < n / 2; i++)
	{
		int d = std::abs(a[i] - a[n - i - 1]);
		if (x != 0 && d != 0)
			ok = false;
	}
	int ans = std::max(x, 1);
	if (parity)
		ans = std::max(ans, 2);
	std::cout << ans << "\n";
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
