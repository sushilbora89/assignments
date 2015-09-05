

#include <iostream>

using namespace std;

//	Class which shows use of initialization list.
class Test
{
	int& i;
	const int j;

public:
	Test(int& k, int l):i(k), j (l)
	{
	}

	~Test()
	{
		cout << i << " " << j << endl;
	}
};

//	main function
int main()
{
	int r = 10;
	Test t(r, 11);
	return 0;
}

