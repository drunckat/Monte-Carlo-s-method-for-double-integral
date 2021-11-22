#include <stdlib.h> 
#include <iostream>
#include <time.h> 
#include <math.h> 
 

int main()
{
	srand(time(NULL)); 
	float sum=0, x, y; 
	int count=0;
	for (int i=0; i<1000000; i++) //Ситуация обыгрывается 1000000 раз
	{
		x=rand()%2001 * 0.001 -1;  //Период X от -1 до 1
		y=rand()%2001 * 0.001 -1; //Период Y от -1 до 1

		if ( ((x+y<=1) and (x>=0) and (y>=0)) or ((y<=(1+x)) and (x<0) and (y>=0)) or ( (y>=x-1) and (x>=0) and (y<0)) or ( (y>=-1-x) and (x<0) and (y<0))  )   //Определяем ОДЗ: 4 одинаковых тр-ка в каждой квадранте
			sum+=x*x;                                      //Считаем сумму
		
	}	
	std::cout<<"Integral: "<<4*sum/(1000000); //Сумму умножаем на площадь периода и делим на кол-во итерации. Узнаем так значение интеграла
	system("pause>NULL");
	return 0;
}

