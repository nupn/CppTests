

#include <stdexcept>
#include <iostream>


class NullReplyException : std::out_of_range {
public:
	NullReplyException()
		: std::out_of_range("Casting null bulk reply to string") {};
};


int foo(int a)// throw(NullReplyException)
{
	if (a == 0)
	{
		throw NullReplyException();
	}

	return a + 1;
}

int zoo()
{
	return -1;
}

int main()
{
	//int aa;
	//std::cin >> aa;
	//foo(aa);

	if (zoo())
	{
		printf("error");
	}


	return 0;
}