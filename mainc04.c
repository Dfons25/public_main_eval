#include <stdio.h>
#include <limits.h>
#include <string.h>

#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"
#include "ex04/ft_putnbr_base.c"
#include "ex05/ft_atoi_base.c"

int main()
{
	int ch;

	printf("0. ex00\n"
		   "1. ex01\n"
		   "2. ex02\n"
		   "3. ex03\n"
		   "4. ex04\n"
		   "5. ex05\n\n");

	printf(": ");
	scanf("%d", &ch);
	printf("\n");

	char a[10] = "";
	char b[10] = "";
	int n = 0;

	switch (ch)
	{
	case 0:
	{
	
	printf("\n#### Ex 00 ####\n");
	
	char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

		// using the %zu format specifier to print size_t
		printf("Original strlen\n");
		printf("Length of string a = %d \n",strlen(a));
		printf("Length of string b = %d \n",strlen(b));

		printf("\n--------------------------\n");
		printf("C04 strlen\n");
		printf("Length of string a = %d \n",ft_strlen(a));
		printf("Length of string b = %d \n",ft_strlen(b));

		break;
	}
	case 1:
	{
		printf("\n#### Ex 01 ####\n");

		printf("abcdefghijkABCDE123/*-()=?`'");
		printf("\n");
		ft_putstr("abcdefghijkABCDE123/*-()=?`'");
		break;
	}
	case 2:
	{
		int n1, n2, n3;
		n1 = INT_MIN;
		n2 = INT_MAX;
		n3 = 0;

		printf("\n#### Ex 02 ####\n");

		printf("INT MIN %d \n", n1);
		printf("ft_putnbr :\n");
		ft_putnbr(n1);
		printf("\n");

		printf("INT MAX %d :\n", n2);
		printf("ft_putnbr :\n");
		ft_putnbr(n2);
		printf("\n");

		printf("NULL %d :\n", n3);
		printf("ft_putnbr :\n");
		ft_putnbr(n3);
		printf("\n");

		break;
	}
	case 3:
	{
		int val;
		char str[20];
		
		printf("\n#### Ex 03 ####\n");

		printf("Original atoi\n");
		strcpy(str, "98993489");
		val = atoi(str);
		printf("String value = %s, Int value = %d\n", str, val);

		strcpy(str, "tutorialspoint.com");
		val = atoi(str);
		printf("String value = %s, Int value = %d\n", str, val);

		printf("\n--------------------------\n");
		printf("C04 atoi\n");
		
		int val_1;
		char str_1[20];
		
		strcpy(str_1, "98993489");
		val_1 = ft_atoi(str_1);
		printf("String value = %s, Int value = %d\n", str_1, val_1);

		strcpy(str_1, "tutorialspoint.com");
		val_1 = ft_atoi(str_1);
		printf("String value = %s, Int value = %d\n", str_1, val_1);

		printf("\n--------------------------\n");

		break;
	}
	case 4:
	{
		int new_max_0;
		new_max_0 = INT_MAX;

		printf("\n#### Ex 04 ####\n");

		printf("base 01\n"):
		ft_putnbr_base(42, "01");
		printf("\n------");

		printf("base 01\n"):
		ft_putnbr_base(new_max_0, "01");
		printf("\n------");

		printf("base decimal\n"):
		ft_putnbr_base(42, "0123456789");
		printf("\n------");

		printf("base hexadecimal\n"):
		ft_putnbr_base(42, "0123456789ABCDEF");
		printf("\n------");

		printf("base empty\n"):
		ft_putnbr_base(42, "");
		printf("\n------");

		printf("base 1\n"):
		ft_putnbr_base(42, "1");
		printf("\n------");

		printf("base 22\n"):
		ft_putnbr_base(42, "22");
		printf("\n------");

		printf("base +22\n"):
		ft_putnbr_base(42, "+22");

		break;
	}

	case 5:
	{
		int new_max;
		new_max = INT_MAX;

		printf("\n#### Ex 05 ####\n");

		printf("base 01\n"):
		ft_atoi_base(42, "01");
		printf("\n------");

		printf("base 01 max\n"):
		ft_atoi_base(new_max, "01");
		printf("\n------");

		printf("base decimal\n"):
		ft_atoi_base(42, "0123456789");
		printf("\n------");

		printf("base hexadecimal\n"):
		ft_atoi_base(42, "0123456789ABCDEF");
		printf("\n------");

		printf("base empty\n"):
		ft_atoi_base(42, "");
		printf("\n------");

		printf("base 1\n"):
		ft_atoi_base(42, "1");
		printf("\n------");

		printf("base 22\n"):
		ft_atoi_base(42, "22");
		printf("\n------");

		printf("base +22\n"):
		ft_atoi_base(42, "+22");


		break;
	}
	}
}
