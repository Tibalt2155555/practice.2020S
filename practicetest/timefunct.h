#pragma once
#include <locale>




int hoursconvert(int hours)
{
    setlocale(LC_ALL, "ukr");

    if (hours == 0)  printf("���� �����");
    if (hours == 1)  printf("���� ������");
    if (hours == 2)  printf("��i ������");
    if (hours == 3)  printf("��� ������");
    if (hours == 4)  printf("������ ������");
    if (hours == 5)  printf("�'��� �����");
    if (hours == 6)  printf("�i��� �����");
    if (hours == 7)  printf("�i� �����");
    if (hours == 8)  printf("�i�i� �����");
    if (hours == 9)  printf("���'��� �����");
    if (hours == 10)  printf("������ �����");
    if (hours == 11)  printf("���������� �����");
    if (hours == 12)  printf("���������� �����");
    if (hours == 13)  printf("���������� �����");
    if (hours == 14)  printf("������������ �����");
    if (hours == 15)  printf("�'��������� �����");
    if (hours == 16)  printf("�i��������� �����");
    if (hours == 17)  printf("�i�������� �����");
    if (hours == 18)  printf("�i�i�������� �����");
    if (hours == 19)  printf("���'���������� �����");
    if (hours == 20)  printf("�������� �����");
    if (hours == 21)  printf("�������� ���� ������");
    if (hours == 22)  printf("�������� ����� ������");
    if (hours == 23)  printf("�������� ����� ������");
    return 0;
}
int minutesconvert(int minutes)
{

    if (minutes < 20) {
        if (minutes == 0)  printf(" ���� ������");
        if (minutes == 1)  printf(" ���� �������");
        if (minutes == 2)  printf(" ��i �������");
        if (minutes == 3)  printf(" ��� �������");
        if (minutes == 4)  printf(" ������ �������");
        if (minutes == 5)  printf(" �'��� ������");
        if (minutes == 6)  printf(" �i��� ������");
        if (minutes == 7)  printf(" �i� ������");
        if (minutes == 8)  printf(" �i�i� ������");
        if (minutes == 9)  printf(" ���'��� ������");
        if (minutes == 10)  printf(" ������ ������");
        if (minutes == 11)  printf(" ���������� �������");
        if (minutes == 12)  printf(" ���������� �������");
        if (minutes == 13)  printf(" ���������� �������");
        if (minutes == 14)  printf(" ������������ �������");
        if (minutes == 15)  printf(" �'��������� ������");
        if (minutes == 16)  printf(" �i��������� ������");
        if (minutes == 17)  printf(" �i�������� ������");
        if (minutes == 18)  printf(" �i�i�������� ������");
        if (minutes == 19)  printf(" ���'��������� ������");
    }
    else
    {
        int A3, A4;
        A3 = minutes / 10;
        A4 = minutes % 10;
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
    return 0;
}