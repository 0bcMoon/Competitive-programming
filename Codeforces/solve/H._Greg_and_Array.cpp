#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()
{
	int n, m, k;
	std::cin >> n >> m >> k;
	std::vector<int> vec(n);
	std::vector<int> l(m);
	std::vector<int> r(m);
	std::vector<int> d(m);
	for (auto &it : vec)
		std::cin >> it;
	for (int i = 0; i < m; i++)
	{
		std::cin >> l[i] >> r[i] >> d[i];
		l[i]--;
		r[i]--;
	}
	for (int i = 0; i < k; i++)
	{
		int x, y;
		std::cin >> x >> y;
		x--;y--;
	}
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
