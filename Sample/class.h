#pragma once

#include<iostream>
#include<vector>
#include <list>

#define CLASS1

#ifdef CLASS0
int main(void)
{
	const int Max = 10;
	int ar[Max] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int& i : ar)
	{
		if (i == 10)
		{
			printf("a\n");
		}
	}

	std::list<int>list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	list.push_back(6);
	list.push_back(7);
	list.push_back(8);
	list.push_back(9);
	list.push_back(10);

	for (auto& i : list)
	{
		printf("%d\n", i);
	}

}
#elif defined CLASS1

class Family
{
public:
	Family()
	{

	}
	~Family()
	{

	}
	static Family* Instance()
	{
		static Family pInstance;
		return &pInstance;
	}
};

class Mam : public Family
{
private:
	Mam()
	{

	}
public:
	~Mam()
	{

	}
	static Mam* Instance()
	{
		static Mam pInstance;
		return &pInstance;
	}
	void Update();
	void Draw();
};

class Dad : public Family
{
private:
	Dad()
	{

	}
public:
	~Dad()
	{

	}
	static Dad* Instance()
	{
		static Dad pInstance;
		return &pInstance;
	}
	void Update();
	void Draw();
};

class Sosn : public Family
{
private:
	Sosn()
	{

	}
public:
	~Sosn()
	{

	}
	static Sosn* Instance()
	{
		static Sosn pInstance;
		return &pInstance;
	}
	void Update();
	void Draw();
};

#elif defined CLASS2

int main(void)
{

}

#endif // CLASS
