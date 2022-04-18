#include<iostream>
std::string iterate(std::string kaid)
{
	std::string NewString;
	for (int i = 0; i < kaid.length(); i++)
	{
		if (kaid.at(i) == 'a')
		{
			NewString.append("ab");
			continue;
		}
		if (kaid.at(i) == 'b')
		{
			NewString.append("cd");
			continue;
		}
		if (kaid.at(i) == 'c')
		{
			NewString.append("cd");
			continue;
		}
		if (kaid.at(i) == 'd')
		{
			NewString.append("ab");
			continue;
		}

	}
	return NewString;
}
char findNum(int k)
{
	k--;
	std::string kai = "a";
	while (kai.length() <= k)
	{
		std::cout << kai << "\n";
		k -= kai.length();
		kai = iterate(kai);
	}
	return kai.at(k);
}
int main()
{
	int NewInt;
	std::cin >> NewInt;
	std::cout << findNum(NewInt);
	system("pause");
	return EXIT_SUCCESS;
}