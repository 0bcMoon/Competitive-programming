#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;

void solve()
{
	int n, l, r, x;
	std::cin >> n >> l >> r >> x;
	std::vector<int> vec(n);
	for (auto &it  :vec)
		std::cin >> it;
	int cnt = 0;
	std::cerr << (1 << n) << "\n";
	for (int i = 0; i < (1 << n); i++)
	{
		int cur_cnt = 0;
		int dif = 0;
		int max = -1;
		int min = INT_MAX;
		for (int j = 0; j < n; j++)
		{
			if ((i >> j) & 1)
			{
				min = std::min(min, vec[j]);
				max = std::max(max, vec[j]);
				dif += vec[j];
				cur_cnt++;
			}
		}
		if (max - min >= x && dif >= l && dif <= r)
			cnt++;
	}
	std::cout << cnt << "\n";
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
