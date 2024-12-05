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
	int sum = vec[0].first + vec[0].second;
	int min = std::min(vec[0].first, vec[0].second);
	ll totale = 0;
	for (int i = 0; i < n; i++)
	{
		int currsum = vec[i].first + vec[i].second;
		if (sum < currsum)
		{
			sum = currsum;
			min = std::min(vec[i].first, vec[i].second);
		}
		totale += std::max(vec[i].first, vec[i].second);
	}
	std::cout << totale + min << "\n";
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
