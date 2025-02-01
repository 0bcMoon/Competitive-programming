#include <algorithm>
#include <iostream>
#include <regex>
#include <vector>
#ifdef DEBUG
#include "debug.hpp"
#endif /* DEBUG */
#ifndef DEBUG
#define dbg(...)
#endif // /* DEBUG */
#define ANS(x)                  \
	do                          \
	{                           \
		std::cout << x << "\n"; \
		return;                 \
	} while (0)

using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
#define all(a) a.begin(), a.end()
void solve()
{
	ll n, x;
	std::cin >> n >> x;

	std::vector<ll> a(n);
	for (auto &it : a)
		std::cin >> it;
	if (n == 1)
		ANS(a[0] + x);
	std::sort(all(a));
	dbg(a);
	ll h = a[0];
	for (int i = 1; i < n; i++)
	{
		ll d = a[i] - a[i - 1];
		d *= i;
		if (x - d < 0)
		{
			h += x /i ;
			std::cout << h << "\n";
			return ;
		}
		x -= d;
		h += a[i] - a[i - 1];
	}
	h += x / n;
	std::cout << h << "\n";
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
		std::cerr << "---------" << "#Case " << n - t << "------------\n";
#endif // !DEBUG
		solve();
	}
	return 0;
}
