#pragma once
#include <locale>

int hconvert(int h) {
     
    switch (h) {
    case (0):  printf("���� �����"); break;
    case (1):  printf("���� ������"); break;
    case (2):  printf("��i ������"); break;
    case (3):  printf("��� ������"); break;
    case (4):  printf("������ ������"); break;
    case (5):  printf("�'��� �����"); break;
    case (6):  printf("�i��� �����"); break;
    case (7):  printf("�i� �����"); break;
    case (8):  printf("�i�i� �����"); break;
    case (9):  printf("���'��� �����"); break;
    case (10):  printf("������ �����"); break;
    case (11):  printf("���������� �����"); break;
    case (12):  printf("���������� �����"); break;
    case (13):  printf("���������� �����"); break;
    case (14):  printf("������������ �����"); break;
    case (15):  printf("�'��������� �����"); break;
    case (16):  printf("�i��������� �����"); break;
    case (17):  printf("�i�������� �����"); break;
    case (18):  printf("�i�i�������� �����"); break;
    case (19):  printf("���'���������� �����"); break;
    case (20):  printf("�������� �����"); break;
    case (21):  printf("�������� ���� ������"); break;
    case (22):  printf("�������� ����� ������"); break;
    case (23):  printf("�������� ����� ������"); break;
    case (24):  printf("�������� �������� ������"); break;
    default:;
    }
    return 11;
}



int mconvert(int m)
{
    int A3, A4;
    A3 = ((m - (m % 10)) - (m - (m % 100))) / 10;
    A4 = m % 10;

    if (m >= 0 || m <= 19)
    {
        switch (m) {
        case (0): printf(" ���� ������"); break;
        case (1): printf(" ���� �������"); break;
        case (2): printf(" ��i �������"); break;
        case (3): printf(" ��� �������"); break;
        case (4): printf(" ������ �������"); break;
        case (5): printf(" �'��� ������"); break;
        case (6): printf(" �i��� ������"); break;
        case (7): printf(" �i� ������"); break;
        case (8): printf(" �i�i� ������"); break;
        case (9): printf(" ���'��� ������"); break;
        case (10): printf(" ������ ������"); break;
        case (11): printf(" ���������� �������"); break;
        case (12): printf(" ���������� �������"); break;
        case (13): printf(" ���������� �������"); break;
        case (14): printf(" ������������ �������"); break;
        case (15): printf(" �'��������� ������"); break;
        case (16): printf(" �i��������� ������"); break;
        case (17): printf(" �i�������� ������"); break;
        case (18): printf(" �i�i�������� ������"); break;
        case (19): printf(" ���'��������� ������"); break;
        default:; return 0;
        }
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