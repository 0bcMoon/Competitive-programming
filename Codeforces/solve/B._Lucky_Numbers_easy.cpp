#include <algorithm>
#include <cstdlib>
#include <iostream>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()
{
	std::string str;
	std::cin >> str;

	ll nb = std::stol(str);
	if (str.size() & 1)
		str.push_back('0');
	ll size = str.size();

	ll max = 0;
	for (int i = 0; i < str.size() / 2; i++)
		max = max * 10 + 7;
	for (int i = 0; i < str.size() / 2; i++)
		max = max * 10 + 4;
	if (max < nb)
		str += "00";
	size = str.size();
	ll min = 1e18;
	for (int i = 0; i < (1 << size); i++)
	{
		int seven = 0, four = 0;
		for (int j = 0; j < size; j++)
		{
			if ((i >> j) & 1)
			{
				seven++;
				str[j] = '4';
			}
			else
			{
				four++;
				str[j] = '7';
			}
		}
		if (seven == four)
		{
			ll n = std::stol(str);
			if (n >= nb)
				min = std::min(min, n);
		}
	}
	std::cout << min << "\n";
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	// int t;
	// std::cin >> t;
	// while(t--)
	{
		solve();
	}
	return 0;
}
