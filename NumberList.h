#pragma once
class NumberList
{
public:
	NumberList(int vec[],int nr_elem);
	void Init();
	bool Add(int x);
	void Sort();
	void Print();

private:
	int numbers[10];
	int count = 0;

};

