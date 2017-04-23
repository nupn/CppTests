#include <stdio.h>
#include <functional>

class Caller
{
public:
	std::function<void(int)> callback;

};


class Callee
{
public:
	int born;
	Callee(int b) : born(b) {};

	void Cry(int p) 
	{
		printf("born : %d", born);
		printf("Cry : %d", p);
	}
};



int main()
{
	Callee callee(1);
	Caller caller;
	caller.callback = std::bind(&Callee::Cry, &callee, std::placeholders::_1);

	caller.callback(1);

	return 0;
};