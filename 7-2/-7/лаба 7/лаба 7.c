//���� 7
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
	printf("������� �������:");
	scanf("%f %c %f",&x,&mp,&y);

	switch (mp)
	{

	case '+':
		printf("��������=%.f\n",x+y);
		break;
	case '-':
		printf("���������=%.f\n",x-y);
		break;
	case '*':
		printf("���������=%.f\n",x*y);
		break;
	case '/':
		printf("�������=%.f\n",x/y);
		break;
	case '^':
		printf("���������� � �������= %f\n",pow(x,y));
		break;

	default:

		printf("����������� ������\n");

	}

	char cp;
	printf("������� ������:\n");
	scanf("%c",&cp);
	switch (cp)
	{


	case '0':
		printf("������� �����\n");
		break;
	case '1':
		printf("������� �����\n");
		break;
	case '2':
		printf("������� �����\n");
		break;
	case '3':
		printf("������� �����\n");
		break;
	case '4':
		printf("������� �����\n");
		break;
	case '5':
		printf("������� �����\n");
		break;
	case '6':
		printf("������� �����\n");
		break;
	case '7':
		printf("������� �����\n");
		break;
	case '8':
		printf("������� �����\n");
		break;
	case '9':
		printf("������� �����\n");
		break;

	case 'b':
		printf("������� �����\n");
		break;
	case 'a':
		printf("������� �����\n");
		break;
	case 'q':
		printf("������� �����\n");
		break;
	case 'w':
		printf("������� �����\n");
		break;
	case 'e':
		printf("������� �����\n");
		break;
	case 'r':
		printf("������� �����\n");
		break;
	case 't':
		printf("������� �����\n");
		break;
	case 'y':
		printf("������� �����\n");
		break;
	case 'u':
		printf("������� �����\n");
		break;
	case 'i':
		printf("������� �����\n");
		break;
	case 'o':
		printf("������� �����\n");
		break;
	case 'p':
		printf("������� �����\n");
		break;
	case 's':
		printf("������� �����\n");
		break;
	case 'd':
		printf("������� �����\n");
		break;
	case 'f':
		printf("������� �����\n");
		break;
	case 'g':
		printf("������� �����\n");
		break;
	case 'h':
		printf("������� �����\n");
		break;
	case 'j':
		printf("������� �����\n");
		break;
	case 'k':
		printf("������� �����\n");
		break;
	case 'l':
		printf("������� �����\n");
		break;
	case 'z':
		printf("������� �����\n");
		break;
	case 'x':
		printf("������� �����\n");
		break;
	case 'c':
		printf("������� �����\n");
		break;
	case 'v':
		printf("������� �����\n");
		break;
	case 'n':
		printf("������� �����\n");
		break;
	case 'm':
		printf("������� �����\n");
		break;

	default:

		printf("����������� ������\n");

	}
	
	char fp;
	printf("������� ����:\n");
	scanf("%c",&fp);
	switch (fp)
    {
	case '.':

		printf("������� �����\n");
		break;

	case ',':

		printf("������� �������\n");
		break;

	case ':':

		printf("������� ��������� \n");
		break;

	case ';':

		printf("������� ����� � �������\n");
		break;

	case '!':

		printf("������ ���������������� ����\n");

		break;

	default:

		printf("����������� ������\n");

	}

	return 0;
}