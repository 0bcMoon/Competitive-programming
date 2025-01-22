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
	int n, l, r;
	std::cin >> n >> l >> r;
	std::vector<int> vec(n);
	for (auto &it : vec)
		std::cin >> it;
	ll sum = 0;
	int k = r - l + 1;
	for (int i = 0; i < k; i++)
		sum += vec[i];
	for (int i = 1; i < n - k + 1; i++)
	{
		ll curr = sum + vec[k + i - 1] - vec[i - 1];
		sum = std::min(curr, sum);
	}
	std::cout << sum << "\n";
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
