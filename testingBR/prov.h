#pragma once
#include <locale>

int hconvert(int h) {
    setlocale(LC_ALL, "ukr"); {
        if (h == 0)  printf("���� �����");
        if (h == 1)  printf("���� ������");
        if (h == 2)  printf("��i ������");
        if (h == 3)  printf("��� ������");
        if (h == 4)  printf("������ ������");
        if (h == 5)  printf("�'��� �����");
        if (h == 6)  printf("�i��� �����");
        if (h == 7)  printf("�i� �����");
        if (h == 8)  printf("�i�i� �����");
        if (h == 9)  printf("���'��� �����");
        if (h == 10)  printf("������ �����");
        if (h == 11)  printf("���������� �����");
        if (h == 12)  printf("���������� �����");
        if (h == 13)  printf("���������� �����");
        if (h == 14)  printf("������������ �����");
        if (h == 15)  printf("�'��������� �����");
        if (h == 16)  printf("�i��������� �����");
        if (h == 17)  printf("�i�������� �����");
        if (h == 18)  printf("�i�i�������� �����");
        if (h == 19)  printf("���'���������� �����");
        if (h == 20)  printf("�������� �����");
        if (h == 21)  printf("�������� ���� ������");
        if (h == 22)  printf("�������� ����� ������");
        if (h == 23)  printf("�������� ����� ������");
        if (h == 24)  printf("�������� �������� ������"); }
    return 0;
}



int mconvert(int m)
{
    int A3, A4;
    A3 = ((m - (m % 10)) - (m - (m % 100))) / 10;
    A4 = m % 10;

    if (m >= 0 || m <= 19)
    {
        if (m == 0)  printf(" ���� ������");
        if (m == 1)  printf(" ���� �������");
        if (m == 2)  printf(" ��i �������");
        if (m == 3)  printf(" ��� �������");
        if (m == 4)  printf(" ������ �������");
        if (m == 5)  printf(" �'��� ������");
        if (m == 6)  printf(" �i��� ������");
        if (m == 7)  printf(" �i� ������");
        if (m == 8)  printf(" �i�i� ������");
        if (m == 9)  printf(" ���'��� ������");
        if (m == 10)  printf(" ������ ������");
        if (m == 11)  printf(" ���������� �������");
        if (m == 12)  printf(" ���������� �������");
        if (m == 13)  printf(" ���������� �������");
        if (m == 14)  printf(" ������������ �������");
        if (m == 15)  printf(" �'��������� ������");
        if (m == 16)  printf(" �i��������� ������");
        if (m == 17)  printf(" �i�������� ������");
        if (m == 18)  printf(" �i�i�������� ������");
        if (m == 19)  printf(" ���'��������� ������");
    }
    else if (m >= 20 || m <= 60)
    {
        if (A3 == 2)  printf(" ��������");
        if (A3 == 3)  printf(" ��������");
        if (A3 == 4)  printf(" �����");
        if (A3 == 5)  printf(" �'�������");
        if (A4 == 1)  printf(" ���� �������");
        if (A4 == 2)  printf(" ��i �������");
        if (A4 == 3)  printf(" ��� �������");
        if (A4 == 4)  printf(" ������ �������");
        if (A4 == 5)  printf(" �'��� ������");
        if (A4 == 6)  printf(" �i��� ������");
        if (A4 == 7)  printf(" �i� ������");
        if (A4 == 8)  printf(" �i�i� ������");
        if (A4 == 9)  printf(" ���'��� ������");
    }
    else
    {
        printf("ERROR");
        exit(1);
    }
    return 0;
}