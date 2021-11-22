#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

#define times  1000000.0

int main()
{
	srand(time(NULL));
	double x, y;
	double sum=0, sum2=0;
	for (int j=0; j<10; j++)
	{
	sum=0;
	for (int i=0; i<times; i++)
	{
		
		x=rand()%100*0.01;
		y=rand()%100*0.01;
		if (y<=x)
			sum+=sqrt(4*x*x-y*y);
	}
	std::cout<<sum/times<<std::endl<<std::endl;
	}

	for (x=0; x<=1; x+=0.0001)
		for (y=0; y<=x; y+=0.0001)
			sum2+=sqrt(4*x*x-y*y);
	std::cout<<sum2/pow((1/0.0001),2)<<std::endl<<std::endl;
	
	system("Pause>NULL");
	return 0;
}
