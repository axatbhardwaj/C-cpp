#include<stdio.h>
#include<conio.h>
#include"funcit.h"

int num1, num2, result_1, conti=0,rec;
int i;
void main()
{
	int rep = 1;
	do {
		
		printf("\t\t\t\t\tCALCULATOR\n");
		printf(" ###\t\tHow to use\n#Enter numbers you want to operate\n#if you want to operate the result again press '1'\n#if you want to Exit press '0'\n\n");
		printf("#\t\t''Enter the Operands''\n\n\n\n");
		printf("Ist  Operand\t:- "); scanf("%d", &num1);
		printf("IInd Operand\t:- "); scanf("%d", &num2);
		printf("\n\tplease Choose\n\n");
		menu(i);
		rec=s_case(i, result_1, num1, num2);
		printf("\n\n#\t\t\t''DO YOU WANT TO CONTINUE THIS CALCULATION''\n\n");
		printf("#\t\tEnter '1' for yes or '0' for no\n");
		printf("#\t\tINPUT\t:- "); scanf("%d", &conti);

		if (conti == 1)
		{
			printf("\n\n\n\t\t\t\t''What to DO...?''\n\n\t");
			printf("\n#\t\tplease Choose\n\n");
			menu(i);
			num1 = rec;
			printf("\t-->first Operand\t\t:-\t%d", num1);
			printf("\n\t-->Second operand\t\t:-\t"); scanf("%d", &num2);
			s_case(i, result_1, num1, num2);
			printf("\n\n\t\t\t''DO YOU WANT TO CONTINUE THIS CALCULATION''\n\n");
			printf("\t\tEnter '1' for yes or '0' for no\n");
			printf("\t\tINPUT\t:- "); scanf("%d", &conti);
		}
		
		printf("#\t\t\t''Do you want to Run This program again....?''\n\n#\t\t'1' for yes , '0' for no\n\n");
		printf("\t\t\tINPUT\t:-\t"); scanf("%d", &rep);
	
	} while (rep == 1);
	_getch();
}
