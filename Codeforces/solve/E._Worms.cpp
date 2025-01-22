#include <algorithm>
#include <cassert>
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
void solve()
{
	int n;
	std::cin >> n;
	std::vector<int> vec(n);
	for (auto &it : vec)
		std::cin >> it;
	std::vector<int> prefix(n);
	prefix[0] = vec[0];
	for (int i = 1; i < n; i++)
		prefix[i] = prefix[i - 1] + vec[i];
	int q;
	std::cin >> q;
	dbg(q);
	for (int i = 0; i < q; i++)
	{
		int k;
		std::cin >> k;
		auto it = std::lower_bound(prefix.begin(), prefix.end(), k);
		std::cout << it - prefix.begin() + 1 << "\n";
	}
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	// int t;
	// std::cin >> t;
	// while (t--)
	{
		solve();
	}
	return 0;
}
