#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>

using namespace std;

class words {
public:
    void displayword(int random) {
        switch (random) {
        case 1: {
            cout << "��� ����� �� 3 ����,�������� ��������,��������)" << endl;
            break;
        }
        case 2: {
            cout << "��� ����� �� 5 ����,����� ������ �� ���, ����� �� ����� ����� � ����������" << endl;
            break;
        }
        case 3: {
            cout << "��� ����� �� 5 ����,��� ���������� � ������� ���� �������� ������� ��� ������ ����� ����" << endl;
            break;
        }
        case 4: {
            cout << "��� ����� �� 6 ����,������� �����������,������� ��� � ��������� ������������ ����������� ����" << endl;
            break;
        }
        case 5: {
            cout << "��� ����� �� 7 ����,��������� ���� ����� ����� ����������� ������� ��������" << endl;
            break;
        }
        case 6: {
            cout << "��� ����� �� 8 ����,������������� ��� ���������� � ������� �����" << endl;
            break;
        }
        }
    }
};