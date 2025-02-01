#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()
{
	int n;
	std::cin >> n;
	std::vector<int> vec(n);
	for (auto &it : vec)
		std::cin >> it;

	for (int i = 0; i < (1 << n); i++)
	{
		ll sum = 0;
		for (int j = 0; j < n; j++)
		{
			if ((i >> j) & 1)
				sum += vec[j];
			else
				sum -= vec[j];
		}
		if (sum == 0 || sum % 360 == 0)
		{
			std::cout << "YES\n";
			return ;
		}
	}
	std::cout << "NO\n";
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
