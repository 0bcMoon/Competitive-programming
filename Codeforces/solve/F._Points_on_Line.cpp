#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <optional>
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

ll fact(int n)
{
	if (n == 0)
		return 1;
	ll res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i;
	return res;
}
ll nCr(int n, int r)
{
	return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
void solve()
{
	int n, d;
	std::cin >> n >> d;
	std::vector<int> vec(n);
	for (auto &it : vec)
		std::cin >> it;
	int cnt = 0;
	auto lower = [&](int idx, int val) -> auto {
		auto it = std::lower_bound(vec.begin() + idx, vec.end(), val);
		if (it == vec.end())
			return it;
		if (*it > val)
			return std::prev(it);
		// while 
		return (it);
	};

	int i = 0;
	while (n - i + 1 >= 3)
	{
		auto idx = lower(i, vec[i] + d) - vec.begin();
		dbg(idx);
		if (idx - i + 1 >= 3)
		{
			cnt += nCr(idx - i + 1, 3);
			i = idx - 1;
		}
		else
			i++;
	}
	std::cout << cnt << "\n";
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
// (n+r-1)! / (r! * (n-1)!)
// (n+2)(n+1)*n/6
// n! / r! (n - r)!
