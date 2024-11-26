#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
int count_1100(std::string &str, int start, int end)
{
	if (end - start < 4)
		return (0);
	int count = 0;
	for (int i = start; i <= end - 4; i++)
	{
		if (str[i] == '1' && str[i + 1] == '1' && str[i + 2] == '0' && str[i + 3] == '0')
			count++;
	}
	return count;
}
void solve()
{
	int n;
	std::string str;
	std::cin >> str >> n;
	std::cout << str << "\n";
	size_t pos = 0;
	int cnt = 0;
	cnt = count_1100(str, 0, str.size());
	std::cout << cnt << "\n";
	for (int i = 0; i < n; i++)
	{
		int idx;
		char c;
		std::cin >> idx >> c;
		int start = idx >= 4 ? idx - 4 : 0;
		int end = idx >= str.size() - 4 ? str.size() : idx + 4;
		start--;
		end--;
		int cn = count_1100(str, start, end);
		str[idx - 1] = c;
		int cn1 = count_1100(str, start, end);
		cnt -= std::abs(cn - cn1);
		if (cn1)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";

		// if (c == '0')
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
