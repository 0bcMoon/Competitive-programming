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
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (auto &it : a)
		std::cin >> it;
	bool ok = true;
	for (int i = 0; i < n; i++)
	{
		if ((a[i] - (n - i - 1) * 2) >= 1 && (a[i] - i * 2) >= 1)
			continue;
		ok = false;
		break;
	}
	if (ok)
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
 
#ifdef DEBUG
	int n = t;
#endif // DEBUG
	while (t--)
	{
#ifdef DEBUG
		std::cerr << "#Case " << n - t << " -------------------\n";
#endif // DEBUG
		solve();
	}
	return 0;
}
