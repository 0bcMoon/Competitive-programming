#include <iostream>
#include <set>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
// new array of n + 1 [0 , a0....an]
// // new array of prefix sum of elemnt and 0
void solve()
{
	int n;
	std::cin >> n;
	std::vector<int> vec(n);
	std::set<int> sum;
	for(auto &it : vec) std::cin >> it;
	for (int i = 0;i < (1 << n) ;i++)
	{
		int ssum = 0;
		for (int j = 0;j < n;j++)
		{
			if ((i >> j ) & 0x1)
				ssum += vec[j];
		}
		if (sum.count(ssum) > 0)
		{
			std::cout << "YES\n";
			return ;
		}
		else
			sum.insert(ssum);
	}
	std::cout << "NO\n";
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
