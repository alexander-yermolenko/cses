#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n{};
	std::cin >> n;
	int answer{};
	for (int i{5}; i <= n; i *= 5) answer += n / i;
	std::cout << answer << '\n';
}
