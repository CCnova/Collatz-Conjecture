//Program to implement the Collatz Conjecture
#include <iostream>

int collatzSteps(int x, int number)
{

	if(x <= 1)
	{
		return number;
	}

	else if(x%2 == 0)
	{
		++number;
		collatzSteps(x/2, number);
	}

	else
	{
		++number;
		collatzSteps(x*3 + 1, number);
	}
}

void collatz(int x)
{
	if(x <= 1)
	{
		return;
	}

	else if(x%2 == 0)
	{
		std::cout << x/2 << " ";
		collatz(x/2);
	}

	else
	{
		std::cout << x*3 + 1 << " ";
		collatz(x*3 + 1);
	}
}

int main()
{
	int n, steps = 0;
	std::cout << "Enter the number wich we will apply the Collatz Conjecture (n > 1): " << std::endl;
	std::cin >> n;

	std::cout << "It took " << collatzSteps(n, steps) << " steps to reach one" << std::endl;

	std::cout << "Here is the sequence: " << std::endl;
	collatz(n);

	std::cout << '\n';

	return 0;
}