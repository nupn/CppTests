#include <boost\optional.hpp>
#include <stdio.h>
#include <iostream>

boost::optional<bool> GetOption(int nOption)
{
	boost::optional<bool> ret;

	switch (nOption)
	{
		case 1: 
			ret = true;
			break;
		case 2:
			ret = false;
			break;
	}

	return ret;
}

boost::optional<int> GetOptionInt(int nOption)
{
	boost::optional<int> ret;

	switch (nOption)
	{
	case 1:
		ret = 1;
		break;
	case 2:
		ret = 2;
		break;
	}

	return ret;
}

int main()
{
	int aa;


	boost::optional<int> g1;
	g1 = 100;
	printf("%d\n", *g1);
	printf("%d\n", g1);


	while (1)
	{
		int option;
		std::cin >> option;

		/*boost::optional<bool> ret = getoption(option);
		if (!ret)
		{
			printf("not init\n");
		}

		if (ret)
		{
			printf("init\n");
		}

		if (*ret)
		{
			printf("true\n");
		}
		else
		{
			printf("false\n");
		}
		*/
		/// 초기화 안했을떄 오류 발생은 안하고 False를 리턴함
		printf("----------------------------\n");
		boost::optional<int> ret2 = GetOptionInt(option);
		if (!ret2)
		{
			printf("not init\n");
		}

		printf("value %d\n", *ret2);
	}

	return 0;
}