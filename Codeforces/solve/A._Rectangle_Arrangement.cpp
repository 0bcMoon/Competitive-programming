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
	std::vector<ipair> a(n);
	int h = 0,w = 0;
	for (auto &it : a)
	{
		std::cin >> it.second >> it.first;
	}
	std::sort(a.begin(), a.end());

	int p = (a[0].first * a[0].second) * 2;
	ipair rec  = a[0];
	for (int i = 1;i<n;i++)
	{
		int p1 = (a[i].first * a[i].second) * 2;

	}


}
// 12 + 
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
