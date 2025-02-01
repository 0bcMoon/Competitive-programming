#include <iostream>
#include <map>
#include <sstream>
#include <utility>
#include <vector>
#define pn(x) std::cout << #x << ' ' << x
#define pnl(x) std::cout << #x << ' ' << x << '\n'
#define p(x) std::cout << x
#define pl(x) std::cout << x << '\n'
#define r(x) std::cin >> x;
using ll = long long;
using namespace std;
vector<string> vec_splitter(string s)
{
	s += ',';
	vector<string> res;
	while (!s.empty())
	{
		res.push_back(s.substr(0, s.find(',')));
		s = s.substr(s.find(',') + 1);
	}
	return res;
}
void debug_out(
	vector<string> __attribute__((unused)) args,
	__attribute__((unused)) int idx,
	__attribute__((unused)) int LINE_NUM)
{
	cerr << endl;
}
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T)
{
	if (idx > 0)
		cerr << ", ";
	else
		cerr << "Line(" << LINE_NUM << ") ";
	stringstream ss;
	ss << H;
	cerr << args[idx] << " = " << ss.str();
	debug_out(args, idx + 1, LINE_NUM, T...);
}
#ifdef DEBUG
#define dbg(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
#define dbg(...) 42
#endif

void solve()
{
	std::string str;
	std::string t;
	std::string u;
	std::cin >> str;
	int n = str.size();
	std::map<char, int> map;
	auto lower = [&](char val) -> std::optional<char> {
		auto it = map.lower_bound(val);
		if (it == map.begin())
			return std::nullopt;
		return std::prev(it)->second;
	};
	for (int i = 0; i < n; i++)
	{
		if (map.count(str[i]))
			map[str[i]]++;
		else
			map[str[i]] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		auto ok = lower(str[i]);
		if (!ok)
			u.push_back(str[i]);
		else
			t.push_back(str[i]);
		auto kv = map.find(str[i]);
		if (kv->second == 1)
			map.erase(kv);
		kv->second--;
	}
	while (!t.empty())
	{
		u.push_back(t.back());
		t.pop_back();
	}
	std::cout << u << '\n';
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
