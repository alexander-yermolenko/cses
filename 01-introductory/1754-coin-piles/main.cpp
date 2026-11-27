#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin >> t;

	for (int i{}; i < t; ++i)
	{
		int a{};
		int b{};
		std::cin >> a >> b;
		if (!((a + b) % 3) && a <= 2 * b && b <= 2 * a) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
}
