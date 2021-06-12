#include<iostream>
#include<math.h>

class Vector
{
private : 
	double x;
	double y;
	double z;
public :

	Vector()  : x(5),y(5), z(0)
	{}
 
	void Length()
	{
		std::cout << sqrt(((5) * (5)) + ((5) * (5))) << std::endl;


	}
	
	 void Show() 
	 {
		 std::cout << x << " " << y << " " << z << std::endl;
	 }


};


int main()
{
	Vector temp;
	temp.Show();
	temp.Length();



}
