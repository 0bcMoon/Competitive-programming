#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()

{
	int n, k;
	std::cin >> n >> k;
	std::map<int, ll> map;
	for (int i = 0; i < k; i++)
	{
		int b, c;
		std::cin >> b >> c;
		if (map.count(b))
			map[b] += c;
		else
			map[b] += c;
	}
	auto kv = map.begin();
	std::priority_queue<ll> pq;
	for (const auto &kv : map)
		pq.push(kv.second);
	long cnt = 0;
	for (int i = 0; i < n && !pq.empty(); i++)
	{
		cnt += pq.top();
		pq.pop();
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
