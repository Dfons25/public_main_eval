#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
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
		printf("%d", strlen("test"));
		printf("%d", ft_strlen("test"));
		break;
	}
	case 1:
	{
		printf("test");
		ft_putstr("test");
		break;
	}
	case 2:
	{
		printf("%d", 123);
		ft_putnbr(123);
		break;
	}
	case 3:
	{
		printf("%d\n", ft_atoi(" ---+--+1234ab567"));
		printf("%d\n", atoi(" -123as"));
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
