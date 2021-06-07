#include<iostream>


int n = 57;
bool a = true;
 
int main()
{
	 
	for (int i = 0; i <= n; ++i)
	{
		
		
		
		if (a == true)
		{
			if (i % 2 == 0)
			{
				std::cout << i << std::endl;
			}
		}

		else   

		{
			if (i % 2 != 0)
			{

				std::cout << i << std::endl;
			}



		}

	}


	return 0;
}