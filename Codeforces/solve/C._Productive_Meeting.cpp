#include <iostream>
#include <queue>
#include <utility>
#include <vector>
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
struct Talks
{
	int cnt;
	int i;
	int j;
	Talks(int cnt, int i, int j)
	{
		this->cnt = cnt;
		this->j = j;
		this->i = i;
	}
};
void solve()
{
	int n;
	std::cin >> n;
	std::priority_queue<std::pair<int, int>> queue;
	for (int i = 1; i <= n; i++)
	{
		int val;
		std::cin >> val;
		if (val)
			queue.push({val, i});
	}
	int cnt = 0;
	std::vector<std::pair<int, int>> vec;
	while (queue.size() > 1)
	{
		auto a = queue.top();
		queue.pop();
		auto b = queue.top();
		queue.pop();

		vec.push_back({b.second, a.second});
		a.first -=1;
		b.first -=1;
		if (a.first)
			queue.push(a);
		if (b.first)
			queue.push(b);
	}
	std::cout << vec.size()<< "\n";
	for (auto &it : vec)
			std::cout << it.first << " " << it.second << "\n";
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
