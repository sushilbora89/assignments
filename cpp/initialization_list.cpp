
#include <iostream>

using namespace std;

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

int main()
{
	int r = 10;
	Test t(r, 11);
	return 0;
}

