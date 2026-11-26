#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n{};
	std::cin >> n;
	int answer{1};
	for (int i{}; i < n; ++i) answer = (2 * answer) % 1000000007;
	std::cout << answer << '\n';

	return 0;
}
