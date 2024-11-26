#include <algorithm>
#include <cstdlib>
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
	// std::sort(vec.begin(), vec.end());
	for (int i = 0;i<n -1;i++)
	{
		int val = std::abs(vec[i+1] - vec[i]);
		if( val != 7 && val != 5)
		{
			std::cout << "NO\n";
			return ;
		}
	}
	std::cout << "YES\n";
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
