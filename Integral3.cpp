#include <iostream>
#include <math.h> //��� fabs()
#include <stdlib.h> //��� rand()
#include <time.h> //��� time()
using namespace std;

int main()
{
	srand(time(NULL));
	double sum=0; //������ ����� �� ��� ��������
	double a=0, x, y; 
	cout<<"a = ";
	cin>>a;
	int count=0;
	for (int i=0; i<1000000; i++) //�������� ������������ 100000 ���
	{
		x=rand()%1000 * 0.001 * a;  //�������� X �� 0 �� a
		y=rand()%1000 * 0.001 * 2*a; //�������� X �� 0 �� 2a
		
		if (fabs(y)>=fabs(x) and (fabs(y)<=fabs(2*a-x)) )        //� � Y ������ ������������� ���
			sum+=(y*y+x*x);                                      //������� �������� "������"
		
	}	
	cout<<"I = "<<2*a*a*sum/(1000000); //����� ���-�� ������������� �������� �� ���-�� ����, ������� �������� ������� �������� ������ 
	                                   //������ ������� ������� ��������� (�� ���). �� ������������ � ���� �������� ���������  
	system("pause>NULL");
	return 0;
}
