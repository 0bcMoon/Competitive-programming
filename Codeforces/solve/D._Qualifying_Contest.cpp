#include <algorithm>
#include <iostream>
#include <ostream>
#include <valarray>
#include <vector>
#ifdef DEBUG
#include "debug.hpp"
#endif /* DEBUG */
#ifndef DEBUG
#define dbg(...) 
#endif // /* DEBUG */
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;

struct Qual
{
	std::string name;
	int score;
	int id;
};

std::ostream &operator<<(std::ostream &os, const Qual &a)
{
	os << a.id << " " << a.score << " " << a.name <<"\n";
	return (os);
}
bool cmp(const Qual &a, const Qual &b)
{
	if (a.id != b.id)
		return (a.id < b.id);
	return (a.score < b.score);
}

void solve()
{
	int n,k;
	std::cin >> n >> k;
	std::vector<Qual> vec(n);
	for (int i = 0;i<n;i++)
	{
		std::cin >> vec[i].name;
		std::cin >> vec[i].id;
		std::cin >> vec[i].score;
	}
	
	for (int i = 1;i<n;i++)
	{

	}
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
