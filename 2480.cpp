#include <iostream>
#include<stdio.h>
int main()
{
	int a, b, c;
	std::cin >> a>>b>>c;
	if (a == b && a == c && b == c)
	{
		std::cout << 10000 + a * 1000;
	}
	else if (a == b && a != c)//a,b��������� 
	{
		std::cout << 1000 + a * 100;
	}
	else if (a == c && a != b)//a,c��������� ,a�� b�� �ٸ���� 
	{
		std::cout << 1000 + a * 100;
	}
	else if (b == c && a != c)//b,c��������� ,a�� c�� �ٸ���� 
	{
		std::cout << 1000 + b * 100;
	}
	//��δٸ���� 
	else if (a != b && a != c && b != c) {
		// a, b, c ��� �ٸ� ��쿡 �ش��ϴ� ó��
		if (a >= b &&a>=c)
		{
			std::cout << a * 100;
		}
		else if(b>=a &&b>=c)
		{
			std::cout << b * 100;
		}
		else if (c >= a && c >= b)
		{
			std::cout << c * 100;
		}
	}
	else
		std::cout << "����";
	
}