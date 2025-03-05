#include "NumberList.h"
#include <iostream>
using namespace std;

NumberList::NumberList(int vec[],int nr_elem)
{
	for (int cont = 0; cont < 10; cont++)
	{
		numbers[count] = vec[count];
		count++;
	}
	count = nr_elem;
}

void NumberList::Init()
{
	count = 0;
};

bool NumberList::Add(int val)
{
	if (count + 1 >=10)
	{
		return false;
	}
	else
	{

		count++;
		numbers[count-1] = val;
	}
}

void NumberList::Sort()

{
	for (int i = 0; i < count; i++)
	{
		int key = numbers[i];
		int j = i - 1;

		while (j >= 0 && numbers[j] > key)
		{
			numbers[j + 1] = numbers[j];
			j = j - 1;
		}
		numbers[j + 1] = key;
	}
}

void NumberList::Print()
{
	for (int cont = 0; cont < count; cont++)
		cout << (numbers[cont])<<" ";
}