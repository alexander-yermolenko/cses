#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n{};
	std::cin >> n;

	long long answer{};
	int previous{};
	for (int i{}, x{}; i < n; ++i)
	{
		std::cin >> x;
		if (x < previous) answer += previous - x;
		else previous = x;
	}
	std::cout << answer << '\n';

	return 0;
}
