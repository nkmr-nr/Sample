
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

	for (auto &i : list)
	{
		printf("%d\n", i);
	}

}
#elif defined CLASS1

int main(void)
{

}

#elif defined CLASS2

int main(void)
{

}

#endif // CLASS
