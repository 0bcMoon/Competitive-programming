#include <algorithm>
#include <cstddef>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;

void solve()
{
	std::string str;
	std::cin >> str;
	auto func = [&](int start, int size) -> int {
		int cnt = 0;
		std::set<std::string> set;
		std::string substr = str.substr(start, size);
		int n = substr.size();
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j <= n; ++j)
				set.insert(substr.substr(i, j - i));
		}
		return set.size();
	};
	for (size_t i = 0; i < str.size(); i++)
	{
		if (func(i, 3) % 2 == 0)
		{
			std::cout << str.substr(i, 3) << "\n";
			return ;
		}
		if (func(i, 2) % 2 == 0)
		{
			std::cout << str.substr(i, 2) << "\n";
			return ;
		}
	}
	std::cout << "-1\n";
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
