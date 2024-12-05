#include <algorithm>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> vec(n);
	for (auto &it : vec)
		std::cin >> it;
	std::sort(vec.rbegin(), vec.rend());
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (sum + vec[i] <= k)
			sum += vec[i];
		else
			break;
	}
	std::cout << k - sum << "\n";
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
