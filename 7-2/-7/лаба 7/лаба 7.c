//лаба 7
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()

{

	setlocale(LC_CTYPE,"RUS");

	char mp;
	float x,y;
	printf("Введите символы:");
	scanf("%f %c %f",&x,&mp,&y);

	switch (mp)
	{

	case '+':
		printf("сложение=%.f\n",x+y);
		break;
	case '-':
		printf("вычитание=%.f\n",x-y);
		break;
	case '*':
		printf("умножение=%.f\n",x*y);
		break;
	case '/':
		printf("деление=%.f\n",x/y);
		break;
	case '^':
		printf("возведение в степень= %f\n",pow(x,y));
		break;

	default:

		printf("Неизвестный символ\n");

	}

	char cp;
	printf("Введите символ:\n");
	scanf("%c",&cp);
	switch (cp)
	{


	case '0':
		printf("Введена цифра\n");
		break;
	case '1':
		printf("Введена цифра\n");
		break;
	case '2':
		printf("Введена цифра\n");
		break;
	case '3':
		printf("Введена цифра\n");
		break;
	case '4':
		printf("Введена цифра\n");
		break;
	case '5':
		printf("Введена цифра\n");
		break;
	case '6':
		printf("Введена цифра\n");
		break;
	case '7':
		printf("Введена цифра\n");
		break;
	case '8':
		printf("Введена цифра\n");
		break;
	case '9':
		printf("Введена цифра\n");
		break;

	case 'b':
		printf("введена буква\n");
		break;
	case 'a':
		printf("введена буква\n");
		break;
	case 'q':
		printf("введена буква\n");
		break;
	case 'w':
		printf("введена буква\n");
		break;
	case 'e':
		printf("введена буква\n");
		break;
	case 'r':
		printf("введена буква\n");
		break;
	case 't':
		printf("введена буква\n");
		break;
	case 'y':
		printf("введена буква\n");
		break;
	case 'u':
		printf("введена буква\n");
		break;
	case 'i':
		printf("введена буква\n");
		break;
	case 'o':
		printf("введена буква\n");
		break;
	case 'p':
		printf("введена буква\n");
		break;
	case 's':
		printf("введена буква\n");
		break;
	case 'd':
		printf("введена буква\n");
		break;
	case 'f':
		printf("введена буква\n");
		break;
	case 'g':
		printf("введена буква\n");
		break;
	case 'h':
		printf("введена буква\n");
		break;
	case 'j':
		printf("введена буква\n");
		break;
	case 'k':
		printf("введена буква\n");
		break;
	case 'l':
		printf("введена буква\n");
		break;
	case 'z':
		printf("введена буква\n");
		break;
	case 'x':
		printf("введена буква\n");
		break;
	case 'c':
		printf("введена буква\n");
		break;
	case 'v':
		printf("введена буква\n");
		break;
	case 'n':
		printf("введена буква\n");
		break;
	case 'm':
		printf("введена буква\n");
		break;

	default:

		printf("Неизвестный символ\n");

	}
	
	char fp;
	printf("Введите знак:\n");
	scanf("%c",&fp);
	switch (fp)
    {
	case '.':

		printf("Введена точка\n");
		break;

	case ',':

		printf("Введена запятая\n");
		break;

	case ':':

		printf("Введено двоеточие \n");
		break;

	case ';':

		printf("Введена точка с запятой\n");
		break;

	case '!':

		printf("Введен восклицательеный знак\n");

		break;

	default:

		printf("Неизвестный символ\n");

	}

	return 0;
}