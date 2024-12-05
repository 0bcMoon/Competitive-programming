#include <iostream>
#include <utility>
#include <vector>
using ll = long long;
#include <set>
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
using spair = std::pair<std::string, std::string>;
void solve()
{
	int n;std::cin >> n;
	std::set<spair> set;

	for (int i = 0; i < n ; i++)
	{
		std::string c,s;
		std::cin >> c >> s;
		set.insert({c, s});
	}
	std::cout << set.size() << "\n";
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
