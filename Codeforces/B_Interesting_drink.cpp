#include <algorithm>
#include <iostream>
#include <iterator>
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
	std::vector<int> vec(n);
	for (auto &it : vec)
		std::cin >> it;
	std::sort(all(vec));
	int m;
	std::cin >> m;
	for (int i = 0; i < m; i++)
	{
		int val;
		std::cin >> val;
		auto it = std::upper_bound(all(vec), val) - vec.begin();
		std::cout << it << "\n";
	}
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	// int t;
	// std::cin >> t;
	// while(t--)
	{
		solve();
	}
	return 0;
}
