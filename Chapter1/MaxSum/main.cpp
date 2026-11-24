#include <iostream>

// MaxSum1 example algorithm - purposefully slow, O(n) = n^3
template <size_t N>
int maxSum1(int (&nums)[N])
{
	int m = 0;
	int s = 0;
	for (size_t i = 1; i <= N; i++)
	{
		for (size_t j = i; j <= N; j++)
		{
			s = 0;
			for (size_t k = i; k <= j; k++)
			{
				s += nums[k];	
			}
			m = std::max(m, s);
		}
	}
	return m;
}

int main()
{
	int nums[] = {1, -2, 4, 5, -1, -5, 2, 7};
	std::cout << maxSum1(nums) << std::endl;
	return 0;
}
