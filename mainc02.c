#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"
#include "ex12/ft_print_memory.c"

int main()
{
	int ch;

	system("clear||cls");

	printf("0. ex00\n"
		   "1. ex01\n"
		   "2. ex02\n"
		   "3. ex03\n"
		   "4. ex04\n"
		   "5. ex05\n"
		   "6. ex06\n"
		   "7. ex07\n"
		   "8. ex08\n"
		   "9. ex09\n"
		   "10. ex10\n"
		   "11. ex11\n"
		   "12. ex12\n\n");

	printf(": ");
	scanf("%d", &ch);
	printf("\n");

	switch (ch)
	{
	case 0:
	{

		char src2[40];
		char dest2[100];
		
		printf("original\n");
		memset(dest2, '\0', sizeof(dest));
		strcpy(src2, "This is tutorialspoint.com");
		strcpy(dest2, src2);

		printf("Final copied string : %s\n", dest2);


		char src[40];
		char dest[100];
		
		printf("c02\n");
		memset(dest, '\0', sizeof(dest));
		ft_strcpy(src, "This is tutorialspoint.com");
		ft_strcpy(dest, src);

		printf("Final copied string : %s\n", dest);

		break;
	}
	case 1:
	{
		printf("********************EX01 ft_strncpy *******************************************\n\n ");

		char src[40];
   		char dest[12];
		
		printf("original\n");
		memset(dest, '\0', sizeof(dest));
		strcpy(src, "This is tutorialspoint.com");
		strncpy(dest, src, 10);

		printf("Final copied string : %s\n", dest);

		char src2[40];
		char dest2[12];
		
		printf("c02\n");
		memset(dest2, '\0', sizeof(dest2));
		strcpy(src2, "This is tutorialspoint.com");
		ft_strncpy(dest2, src2, 10);

		printf("Final copied string : %s\n", dest2);
		break;
	}
	case 2:
	{
		printf("****************************Ex02 ft_str_is_alpha ***********************************\n ");
		printf("Escreva uma função que retorne 1 se a string passada como parâmetro só contiver caracteres\n");
		printf("alfabéticos e retorne 0 se a função contiver outros tipos de caracteres.\n\n");
		printf("Ela deverá retornar 1 se str for uma string vazia.\n\n");
		printf("Sintaxe: int ft_str_is_alpha (char *string); \n \n");

		char *alfabetica_2 = "Olamundo";
		char *nao_alfabetica_2 = "Ola mundo ";
		char *vazia_2 = "";

		printf("\n A string vazia ( %s ) e alfabetica? %d \n", vazia_2, ft_str_is_alpha(vazia_2));

		printf("\n A string alfabetica ( %s ) e alfabetica? %d \n ", alfabetica_2, ft_str_is_alpha(alfabetica_2));

		printf("\n A string nao alfabetica ( %s ) e alfabetica? %d \n ", nao_alfabetica_2, ft_str_is_alpha(nao_alfabetica_2));
		printf("\n\n*******************************************************************\n\n\n");
		break;
	}
	case 3:
	{
		printf("****************************Ex03 ft_str_is_numeric ***********************************\n\n ");
		printf("Escreva uma função que retorne 1 se a string passada como parâmetro só contiver números \n");
		printf("e retorne 0 se a função contiver outros tipos de caracteres.\n\n");
		printf("Ela deverá retornar 1 se str for uma string vazia.\n\n");
		printf("Sintaxe:  int ft_str_is_numeric(char *str); \n \n");
		char *vazia_3 = "";
		char *alfanumerico_3 = "1234567890";
		char *nao_alfanumerico_3 = "123456789o";

		printf("\n A string vazia ( %s ) e alfanumerica? %d \n", vazia_3, ft_str_is_numeric(vazia_3));

		printf("\n A string alfanumerico ( %s ) e alfanumerica? %d \n ", alfanumerico_3, ft_str_is_numeric(alfanumerico_3));

		printf("\n A string nao_alfanumerico ( %s ) e alfanumerica? %d \n", nao_alfanumerico_3, ft_str_is_numeric(nao_alfanumerico_3));

		printf("\n\n*******************************************************************\n\n\n");
		break;
	}
	case 4:
	{
		printf("****************************Ex04 ft_str_is_lowercase ***********************************\n\n ");
		printf("Escreva uma função que retorne 1 se a string passada como parâmetro só contiver caracteres alfabéticos minúsculos \n");
		printf("e retorne 0 se a função contiver outros tipos de caracteres.\n\n");
		printf("Ela deverá retornar 1 se str for uma string vazia.\n\n");
		printf("Sintaxe:  int ft_str_is_lowercase(char *str); \n \n");

		char *vazia_4 = "";
		char *minusculas_4 = "olamundo";
		char *nao_minusculas_4 = "ola mundo";

		printf("\n A string vazia ( %s ) so tem minusculas? %d \n", vazia_4, ft_str_is_lowercase(vazia_4));

		printf("\n A string minusculas ( %s ) so tem minusculas? %d \n", minusculas_4, ft_str_is_lowercase(minusculas_4));

		printf("\n A string nao_minusculas ( %s ) so tem minusculas? %d \n", nao_minusculas_4, ft_str_is_lowercase(nao_minusculas_4));

		printf("\n\n*******************************************************************\n\n\n");

		break;
	}

	case 5:
	{
		printf("****************************Ex05 ft_str_is_uppercase ***********************************\n\n ");
		printf("Escreva uma função que retorne 1 se a string passada como parâmetro só contiver caracteres alfabéticos maiúsculos \n");
		printf("e retorne 0 se a função contiver outros tipos de caracteres.\n\n");
		printf("Ela deverá retornar 1 se str for uma string vazia.\n\n");
		printf("Sintaxe:  int ft_str_is_uppercase(char *str); \n \n");

		char *vazia_5 = "";
		char *maiusculas_5 = "OLAMUNDO";
		char *nao_maiusculas_5 = "OLA MUNDO";

		printf("\n A string vazia ( %s ) so tem maiusculas? %d \n", vazia_5, ft_str_is_uppercase(vazia_5));

		printf("\n A string minusculas ( %s ) so tem minusculas? %d \n", maiusculas_5, ft_str_is_uppercase(maiusculas_5));

		printf("\n A string nao_minusculas ( %s ) so tem minusculas? %d \n", nao_maiusculas_5, ft_str_is_uppercase(nao_maiusculas_5));

		printf("\n\n*******************************************************************\n\n\n");

		break;
	}

	case 6:
	{
		printf("**************************** Ex06 ft_str_is_printable ***********************************\n\n ");
		printf("Escreva uma função que retorne 1 se a string passada como parâmetro só contiver caracteres imprimíveis \n");
		printf("e retorne 0 se a função contiver outros tipos de caracteres.\n\n");
		printf("Ela deverá retornar 1 se str for uma string vazia.\n\n");
		printf("Sintaxe:  int ft_str_is_printable(char *str); \n \n");

		char *vazia_6 = "";
		char *nao_imprimivel_6 = "OLAMU\x19NDO";
		char *imprimivel_6 = "OLA MUNDO";

		printf("\n A string vazia ( %s ) e imprimivel? %d \n", vazia_6, ft_str_is_printable(vazia_6));
		printf("\n A string nao_imprimivel ( OLAMU\\x19NDO ) e imprimivel? %d \n", ft_str_is_printable(nao_imprimivel_6));
		printf("\n A string imprimivel ( %s ) e imprimivel? %d \n", imprimivel_6, ft_str_is_printable(imprimivel_6));

		printf("\n\n*******************************************************************\n\n\n");
		break;
	}

	case 7:
	{
		printf("**************************** Ex07 ft_strupcase ***********************************\n\n ");
		printf("Escreva uma função que deixe todas as letras em maiúsculo. \n");
		printf("Sintaxe:  int ft_strupcase(char *str); \n \n");

		char minusculas_7[50] = "Fez o exercicio Certo!!!";

		printf("\n\n %s \n\n ", ft_strupcase(minusculas_7));

		printf("\n\n*******************************************************************\n\n\n");

		break;
	}
	case 8:
	{
		printf("**************************** Ex08 ft_strlowcase ***********************************\n\n ");
		printf("Escreva uma função que deixe todas as letras em minusculas. \n");
		printf("Sintaxe:  int ft_strlowcase(char *str); \n \n");

		char maiusculas_8[50] = "FEZ O EXERCICIO CERTO!!!";

		printf("\n\n %s \n\n ", ft_strlowcase(maiusculas_8));

		printf("\n\n*******************************************************************\n\n\n");

		break;
	}
	case 9:
	{
		printf("**************************** Ex09 ft_strcapitalize ***********************************\n\n ");
		printf("Escreva uma função que deixe a primeira letra de cada palavra em maiúsculo e o resto da palavra em minúsculo.\n");
		printf("* Uma palavra é uma sequência de caracteres alfanuméricos. \n");
		printf("* Ela deverá retornar str. \n");
		printf("Sintaxe:  char *ft_strcapitalize(char *str); \n \n");

		char frase_9[100] = "o exerCicio esta-certo!!! 42escola ";
		printf("\n %s \n", ft_strcapitalize(frase_9));

		printf("\n\n*******************************************************************\n\n\n");

		break;
	}
	case 10:
	{
		printf("**************************** Ex10 ft_strlcpy ***********************************\n\n ");
		printf("Reproduzir de forma idêntica o funcionamento da função strlcpy (man strlcpy).\n");
		printf(" \n");
		printf(" \n");
		printf("Sintaxe:  unsigned int ft_strlcpy(char *dest, char *src, unsigned int size); \n \n");

		char frase_10[] = "O exercicio esta Certo!!!";
		char destino[23];

		printf("O exercicio esta Certo!!! = %d\n", ft_strlcpy(destino, frase_10, 24));

		puts(frase_10);
		puts(destino);

		printf("\n\n*******************************************************************\n\n\n");

		break;
	}
	case 11:
	{
		printf("**************************** Ex11 ft_putstr_non_printable ***********************************\n\n ");
		printf("Escreva uma função que mostre uma string de caracteres na tela. Se essa string contiver caracteres não imprimíveis, eles devem ser mostrados na forma hexadecimal (em minúsculo) precedidos por um \"backslash\".\n");
		printf(" \n");
		printf(" \n");
		printf("Sintaxe:   void ft_putstr_non_printable(char *str); \n\n");

		char a[] = {1, 26, 27};
		printf("Solucao: \n\\01\\1a\\1b\n");
		printf("Resultado:\n");
		ft_putstr_non_printable(a);

		printf("\n\n*******************************************************************\n\n\n");

		break;
	}
	case 12:
	{
		printf("**************************** Ex11 ft_putstr_non_printable ***********************************\n\n ");
		printf("Escreva uma função que mostre uma string de caracteres na tela. Se essa string contiver caracteres não imprimíveis, eles devem ser mostrados na forma hexadecimal (em minúsculo) precedidos por um \"backslash\".\n");
		printf(" \n");
		printf(" \n");
		printf("Sintaxe:   void ft_putstr_non_printable(char *str); \n\n");

		int n12 = 234;
		int *pointer12 = &n12;
		ft_print_memory(pointer12, 8);
		printf("\n\n*******************************************************************\n\n\n");

		break;
	}
	}
}
