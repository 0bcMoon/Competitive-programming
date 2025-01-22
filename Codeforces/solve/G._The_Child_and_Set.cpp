#include <algorithm>
#include <bitset>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;

void solve()
{
	int sum, limit;
	std::cin >> sum >> limit;
	std::vector<int> vec;

	int mask = 0;
	for (int i = 1; i <= limit; i++)
	{
		int sum2 = 0;
		for (int j = 0; j < 32; j++)
		{
			if ((i >> j) & 1)
				sum2 += (1 << j);
		}
		vec.push_back(sum2);
	}
	std::sort(vec.begin(), vec.end());
	int r = vec.size(), l = 0;

	while (l < r)
	{

	}
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
