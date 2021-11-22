#include <iostream>
#include <math.h> //для fabs()
#include <stdlib.h> //Для rand()
#include <time.h> //для time()
using namespace std;

int main()
{
	srand(time(NULL));
	double sum=0; //Хранит сумму за все итерации
	double a=0, x, y; 
	cout<<"a = ";
	cin>>a;
	int count=0;
	for (int i=0; i<1000000; i++) //Ситуация обыгрывается 100000 раз
	{
		x=rand()%1000 * 0.001 * a;  //Диапозон X от 0 до a
		y=rand()%1000 * 0.001 * 2*a; //Диапозон X от 0 до 2a
		
		if (fabs(y)>=fabs(x) and (fabs(y)<=fabs(2*a-x)) )        //Х и Y должны удовлетворять ОДЗ
			sum+=(y*y+x*x);                                      //Считаем значение "высоты"
		
	}	
	cout<<"I = "<<2*a*a*sum/(1000000); //Делим кол-во благоприятных итерации на кол-во всех, находим значение среднее значение высоты 
	                                   //Дальше находим площадь диапозона (не ОДЗ). Их перемножение и есть значение интеграла  
	system("pause>NULL");
	return 0;
}
