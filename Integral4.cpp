#include <stdlib.h> 
#include <iostream>
#include <time.h> 
#include <math.h> 
 

int main()
{
	srand(time(NULL)); 
	float sum=0, x, y; 
	int count=0;
	for (int i=0; i<1000000; i++) //�������� ������������ 1000000 ���
	{
		x=rand()%2001 * 0.001 -1;  //������ X �� -1 �� 1
		y=rand()%2001 * 0.001 -1; //������ Y �� -1 �� 1

		if ( ((x+y<=1) and (x>=0) and (y>=0)) or ((y<=(1+x)) and (x<0) and (y>=0)) or ( (y>=x-1) and (x>=0) and (y<0)) or ( (y>=-1-x) and (x<0) and (y<0))  )   //���������� ���: 4 ���������� ��-�� � ������ ���������
			sum+=x*x;                                      //������� �����
		
	}	
	std::cout<<"Integral: "<<4*sum/(1000000); //����� �������� �� ������� ������� � ����� �� ���-�� ��������. ������ ��� �������� ���������
	system("pause>NULL");
	return 0;
}

