#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"


int main()
{
	int ch;

	system("clear||cls");

	printf("0. ex00\n"
		   "1. ex01\n"
		   "2. ex02\n"
		   "3. ex03\n"
		   "4. ex04\n"
		   "5. ex05\n");

	printf(": ");
	scanf("%d", &ch);
	printf("\n");

	switch (ch)
	{
	case 0:
	{
			printf("%d", ft_strcmp("test", "test"));
			printf(" %d", strcmp("test", "test"));
			printf("\n");
			printf("%d", ft_strcmp("test1", "test"));
			printf(" %d", strcmp("test1", "test"));
			printf("\n");
			printf("%d", ft_strcmp("test03", "test0a"));
			printf(" %d", strcmp("test03", "test0a"));
			printf("\n");

		break;
	}
	case 1:
	{
		printf("%d", ft_strncmp("test", "test", 5));
		printf(" %d", strncmp("test", "test", 5));
		printf("\n");
		printf("%d", ft_strncmp("test1", "test", 5));
		printf(" %d", strncmp("test1", "test", 5));
		printf("\n");
		printf("%d", ft_strncmp("test03", "test00", 6));
		printf(" %d", strncmp("test03", "test00", 6));
		printf("\n");
		break;
	}
	case 2:
	{
		char t1[50] = "Fez o exercicio";
		char t2[50] = " Certo!!!";
		printf("\n %s", strcat(t1, t2));
		char t3[50] = "Fez o exercicio";
		char t4[50] = " Certo!!!";
		printf("\n %s", ft_strcat(t3, t4));
		break;
	}
	case 3:
	{
		char t5[50] = "Fez o exercicio";
		char t6[50] = " Certo!!!";
		printf("\n %s", strncat(t5, t6, 3));
		char t7[50] = "Fez o exercicio";
		char t8[50] = " Certo!!!";
		printf("\n %s", ft_strncat(t7, t8, 3));
		break;
	}
	case 4:
	{
		char t9[50] = "Fez o exercicio";
		char t10[50] = " exer";
		printf("\n %s", strstr(t9, t10));
		char t11[50] = "Fez o exercicio";
		char t12[50] = " exer";
		printf("\n %s", ft_strstr(t11, t12));
		break;
	}

	case 5:
	{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");
		break;
	}
	}
}
