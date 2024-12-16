#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
int find_next(std::string &str, size_t start)
{
	int idx = start;
	int nb = str[start++] - 48;
	int dis = 1;
	for (size_t i = start; i < str.size(); i++, dis++)
	{
		if (str[i] - 48 - dis > nb)
		{
			idx = i;
			nb = str[i] - 48 - dis;
		}
	}
	str[idx] = '_';
	return (nb);
}
void solve()
{
	std::string str;
	std::cin >> str;
	int n = str.size();
	std::string s;
	for (int i = 0; i < n; i++)
	{
		while (str[i] != '_')
			s.push_back(find_next(str, i) + 48);
	}
	std::cout << s << "\n";
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
