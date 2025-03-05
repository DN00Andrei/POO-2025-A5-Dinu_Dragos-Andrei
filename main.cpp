
#include "NumberList.h"
#include <iostream>
using namespace std;

	int main()
{
		int vec[7] = { 5,4,3,2,100,1001,2002 };

		NumberList Lista(vec,7);
		Lista.Print(); cout << endl << endl;

		Lista.Add(400); Lista.Add(-17);
		Lista.Print();
		cout << endl << endl;

		Lista.Sort();
		Lista.Print();
		cout << endl << endl;

		if (Lista.Add(4000) == false)
			cout << "Lista este plina" << endl << endl;
		else
			cout << "Ceva nu e bine..." << endl << endl;

		Lista.Init();
		Lista.Add(111);
		Lista.Print();
	};

