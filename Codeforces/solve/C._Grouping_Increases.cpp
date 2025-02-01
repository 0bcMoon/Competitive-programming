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
	int cnt = 0;
	std::vector<int> a;
	std::vector<int> b;
	for (int i = 0; i < n; i++)
	{
		if (a.empty())
			a.push_back(vec[i]);
		else if (vec[i] <= a.back())
			a.push_back(vec[i]);
		else
			b.push_back(vec[i]);
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
// 8 2 3 1 1 7 4 3
// 8 2  1 1 0
// 3 7 4 3 1
