//Program to implement the Collatz Conjecture
#include <iostream>

int collatz(int x, int number)
{

	if(x <= 1)
	{
		return number;
	}

	else if(x%2 == 0)
	{
		++number;
		collatz(x/2, number);
	}

	else
	{
		++number;
		collatz(x*3 + 1, number);
	}
}

int main()
{
	int n, steps = 0;
	std::cout << "Enter the number wich we will apply the Collatz Conjecture (n > 1): " << std::endl;
	std::cin >> n;

	std::cout << "It took " << collatz(n, steps) << " steps to reach one" << std::endl;

	return 0;
}