#include <algorithm>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()
{
	int n;
	std::cin >> n;
	std::vector<ipair> vec(n);
	for (int i = 0; i < n; i++)
		std::cin >> vec[i].first;
	for (int i = 0; i < n; i++)
		std::cin >> vec[i].second;
	ll sum = 0;
	for (int i = 0; i < n; i++)
		sum += std::max(vec[i].first, vec[i].second);
	ll ans = -1e9;
	for (int i = 0;i<n;i++)
		ans = std::max(ans, sum + std::min(vec[i].second, vec[i].first));
	std::cout << ans << "\n";
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

// 1 1 2 0 -4 -1
// 1 4 2 -1 -3 2
