#include<funcit.h>
#include<stdio.h>
int i;

int addit(int a, int b)
{
	return a += b;
}

int subit(int a, int b)
{
	return a -= b;
}

int mulit(int a, int b)
{
	return a *= b;
}

int divit(int a, int b)
{
	return a /=b ;
}
	

int s_case(int ch,int res,int a, int b)
{
	switch (ch)
	{
	case 1:
		res = addit(a, b);
		break;
	case 2:
		res = subit(a, b);
		break;
	case 3:
		res = mulit(a, b);
		break;
	case 4:
		res = divit(a, b);
	default:
		printf("\n\n\n\n\n\t\t\tINVALID INPUT\n\n\n\n");
	}

	printf("\n\t\t\tResult\t=\t%d", res);
	return res;
}
void menu()
{
	printf("*\t\t'1' to ADD\n*\t\t'2' to SUBTRACT\n*\t\t'3' to MULTIPLY\n*\t\t'4' to DIVIDE\n");
	printf("#\t\tINPUT	:-"); scanf_s("%d", &i);
}