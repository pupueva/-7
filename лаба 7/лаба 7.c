//лаба 7
#define _CRT_NO_SECURE_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

	setlocale(LC_CTYPE, "RUS");
	char c;
	float x,y;

	printf("Введите символы:");
	scanf_s("%f%c%f",&x,&c,&y);

	switch (c)

	{
		//1

	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':


		printf("Введена цифра\n");

		break;

	case 'b':
	case 'a':
	case 'q':
	case 'w':
	case 'e':
	case 'r':
	case 't':
	case 'y':
	case 'u':
	case 'i':
	case 'o':
	case 'p':
	case 's':
	case 'd':
	case 'f':
	case 'g':
	case 'h':
	case 'j':
	case 'k':
	case 'l':
	case 'z':
	case 'x':
	case 'c':
	case 'v':
	case 'n':
	case 'm':

		printf("введена буква\n");

		break;


	case '+':

		printf("сложение=%f\n",x+y);
	case '-':

		printf("вычитание=%f\n",x-y);
	case '*':

		printf("умножение=%f\n",x*y);

	case '/':

		printf("деление=%f\n",x/y);

	case 'x**y':

		printf("возведение в степень=%f\n", pow(x, y));

		break;

	case '.':

		printf("Введена точка\n");

	case ',':

		printf("Введена запятая\n");
	case ':':

		printf("Введена \n");
	case ';':

		printf("Введена точка\n");

	case '!':

		printf("Введена точка\n");

		break;

	default:

		printf("Неизвестный символ\n");

	}

	return 0;

}