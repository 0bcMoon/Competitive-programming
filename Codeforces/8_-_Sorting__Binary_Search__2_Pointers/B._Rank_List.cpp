#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
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
struct PairCompare
{
	// Use () operator to define the comparison
	bool operator()(const ipair &a, const ipair &b) const
	{
		if (a.first == b.first)
			return a.second < b.second;
		return a.first > b.first;
	}
};
void solve()
{
	int n, k;
	std::cin >> n >> k;
	std::map<ipair, int, PairCompare> map;
	for (int i = 0; i < n; i++)
	{
		ipair a;
		std::cin >> a.first >> a.second;
		auto kv = map.find(a);
		if (kv == map.end())
			map[a] = 1;
		else
			kv->second++;
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
