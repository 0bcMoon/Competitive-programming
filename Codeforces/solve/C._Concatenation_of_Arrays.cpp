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
bool cmp(const lpair &a, const lpair &b)
{
	return (a.first + a.second < b.second + b.first);
}
void solve()
{
	int n;
	std::cin >> n;
	std::vector<lpair> vec(n);
	for (auto &it : vec)
	{
		std::cin >> it.first;
		std::cin >> it.second;
	}
	std::sort(vec.begin(), vec.end(), cmp);
	for (auto &it : vec)
		std::cout << it.first << ' ' << it.second << ' ';
	std::cout << std::endl;
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
