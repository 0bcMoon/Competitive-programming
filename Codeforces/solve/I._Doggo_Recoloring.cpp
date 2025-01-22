#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()
{
	int n;
	std::string str;
	std::cin >> n >> str;
	std::vector<int> vec(26, 0);
	for (int i = 0; i < n; i++)
	{
		int idx = str[i] - 'a';
		vec[idx]++;
	}
	std::string ans = "NO\n";
	for (auto &it : vec)
	{
		if (it >= 2)
			ans = "YES\n";
	}
	if (n == 1)
		ans = "YES\n";
	std::cout << ans;
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
