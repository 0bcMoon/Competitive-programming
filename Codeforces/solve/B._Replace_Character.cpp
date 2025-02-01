#include <algorithm>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;

long long factorial(int n)
{
	if (n == 0)
		return (1L);
	long long result = 1;
	for (int i = 2; i <= n; ++i)
	{
		result *= i;
	}
	return result;
}
void solve()
{
	int n;
	std::string str;
	std::cin >> n >> str;
	std::vector<int> vec(26, 0);
	for (int i = 0; i < n; i++)
		vec[str[i] - 'a']++;
	int p = std::max_element(vec.begin(), vec.end()) - vec.begin();
	int min = 1e9;
	int idx = -1;
	for (int i = 0; i < 26; i++)
	{
		if (vec[i] && min > vec[i])
		{
			min = vec[i];
			idx = i;
		}
	}
	for (auto &it:vec)
	{
		if (it == idx + 'a')
			it = p + 'a';
	}
	std::cout << str << "\n";
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
