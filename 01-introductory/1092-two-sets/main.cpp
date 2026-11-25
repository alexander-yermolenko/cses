#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n{};
	std::cin >> n;

	long long sum{(1ll * n * (1ll * n + 1)) / 2};
	if (sum % 2) std::cout << "NO\n";
	else
	{
		std::cout << "YES\n";
		std::vector<int> set1, set2;
		set1.reserve(n / 2 + 1);
		set2.reserve(n / 2 + 1);
		std::vector<bool> visited(n + 1, 0);

		long long set1_sum{};
		long long max_element{n};

		while (set1_sum < sum / 2)
		{
			long long remaining_sum = sum / 2 - set1_sum;
			if (remaining_sum > max_element)
			{
				set1.push_back(max_element);
				visited[max_element] = 1;
				set1_sum += max_element;
				--max_element;
			}
			else
			{
				set1.push_back(remaining_sum);
				visited[remaining_sum] = 1;
				set1_sum = sum / 2;
			}
		}

		for (int i{1}; i <= n; ++i)
		{
			if (visited[i] == 0) set2.push_back(i);
		}

		std::cout << set1.size() << '\n';
		for (int element : set1) std::cout << element << ' ';
		std::cout << '\n';

		std::cout << set2.size() << '\n';
		for (int element : set2) std::cout << element << ' ';
		std::cout << '\n';
	}

	return 0;
}
