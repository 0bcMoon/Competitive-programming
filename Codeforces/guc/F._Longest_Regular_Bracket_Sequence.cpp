#include <iostream>
#include <map>
#include <stack>
#define pn(x) std::cout << #x << ' ' << x
#define pnl(x) std::cout << #x << ' ' << x << '\n'
#define p(x) std::cout << x
#define pl(x) std::cout << x << '\n'
#define r(x) std::cin >> x;
using ll = long long;
template <typename T>
#define endl std::cout << '\n'
void bcase(const T &value, bool newline = true)
{
	std::cout << value;
	if (newline)
		std::cout << '\n';
}
void solve()
{
	std::string s;
	std::map<int, int> map;
	std::cin >> s;
	std::stack<char> stack;
	int cnt = 0;

	auto insert = [](std::map<int, int> &map, int &key) -> void {
		if (map.count(key) == 0)
			map[key] = 1;
		else
			map[key] += 1;
	};

	for (char &c : s)
	{
		if (stack.empty() || c == '(')
		{
			stack.push(c);
			insert(map, cnt);
			cnt = 0;
		}
		else if (c == ')' && stack.top() == '(')
		{
			stack.pop();
			cnt += 2;
		}
		else
		{
			stack.push(c);
			insert(map, cnt);
			cnt = 0;
		}

	}
	for (auto it = map.begin(); it != map.end(); it++)
		std::cout << it->first << ' ' << it->second << '\n';

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
