#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
#define all(x) (x).begin(), (x).end()

void solve()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for(auto &it : a) std::cin >> it;

	int m;
	std::cin >> m;
	std::vector<int> b(m);
	for(auto &it : b) std::cin >> it;
	std::partial_sum(all(a), a.begin());
	std::partial_sum(all(b), b.begin());
	ll ans = *std::max_element(all(a));
	ll ans2 = *std::max_element(all(b));
	std::cout << std::max(ans, 0LL) + std::max(ans2, 0LL) << "\n";
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
