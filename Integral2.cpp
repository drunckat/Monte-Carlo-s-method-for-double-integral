#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
	srand(time(NULL));
	float x, y, sum1=0, sum2=0, sum3=0, sum4=0, sum5=0, sum6=0;
	bool key; 
	int index=0;
	for (int i=0; i<1000000; i++)
	{
		
		x=   2 + 0.01 * (rand()%1601); //случайное число от 2 до 18
		y=  -6 + 0.01 * (rand()%1001);//Случайное число от -6 до 4
		if ((x<8) and (y>2) and y<=sqrt(2*x))  //Определяем ОДЗ
			sum1+=(x+y);
		else if ((x>=8) and (y>2) and (y<=(12-x)))
			sum2+=(x+y);
		else if ((y<=2) and (y>0) and (x>=(4-y)) and (x<=(12-y)))
			sum3+=(x+y);
		else if ( (y<=0) and (x<8) and (y>=(4-x))) 
			sum4+=(x+y);
		else if ( (8<x) and (x<=12) and (y<=0) and (y>= (-sqrt(2*x))))
			sum5+=(x+y);
		else if ( (x>12) and (y<=(12-x)) and  (y>= (-sqrt(2*x))))
			sum6+=(x+y);
	}

	cout<<160*(sum1+sum2+sum3+sum4+sum5+sum6)/1000000<<endl; //Умножаем на диапозон
	
	system("Pause>NULL");
	return 0;
}
