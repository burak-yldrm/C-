#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i])
		{
			while (argv[i][j])
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			if (argc > 2 && argv[i + 1])
				std::cout << " ";
			i++;
			j = 0;
		}
	}
	std::cout << std::endl;
	return (0);
}
