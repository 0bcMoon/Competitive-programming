#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using ll = long long;
#define endl '\n'
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
bool cmp(const std::pair<ll, ll> &a, const std::pair<ll, ll> &b)
{
	return (std::abs(a.first - a.second) > std::abs(b.first - b.second));
}
ll diff(lpair &p)
{
	ll a = std::abs(p.first - p.second);
	return (a * a);
}
void solve()
{
	int n, k1, k2;
	std::cin >> n >> k1 >> k2;
	std::priority_queue<ll, std::vector<ll>, std::less<ll>> pq;
	std::vector<std::pair<ll, ll>> a(n);
	for (auto &it : a)
		std::cin >> it.first;
	for (auto &it : a)
		std::cin >> it.second;
	for (int i = 0; i < n; i++)
		pq.push(std::abs(a[i].first - a[i].second));
	int k = k1 + k2;
	while (k--)
	{
		auto x = pq.top();
		pq.pop();
		x = std::abs(--x);
		pq.push(x);
	}
	ll error = 0;
	while (!pq.empty())
	{
		auto x = pq.top();
		error += x * x;
		pq.pop();
	}
	std::cout << error << endl;
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
