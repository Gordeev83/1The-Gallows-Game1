#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>


using namespace std;

class menu
{
public:
    int showmenu() {
        int choice;
        do {
            cout << endl << endl << endl;
            cout << "********************************************************************************************************" << endl;
            cout << "*\t\t\t\t\t���������� ������� ����!" << endl;
            cout << "*\t\t\t\t\t1.������ ���� " << endl;
            cout << "*\t\t\t\t\t2.�� ���� " << endl;
            cout << "*\t\t\t\t\t3.�����" << endl;
            cout << "********************************************************************************************************" << endl;
            cin >> choice;

            switch (choice) {
            case 1: {
                cout << "*********************************" << endl;
                system("cls");
                return 1;
            }
            case 2: {
                cout << "������������ �����,���� ������ ������� ��� ��������������� �� ������.� ���� 6 ������� " << endl;
                return 2;
            }
            case 3: {
                cout << "�� �������!!!" << endl;
                return 3;
            }
            default: {
                cout << "������ ���� �� 3 ���������." << endl;
                break;
            }
            }
        } while (choice != 3);
    }

};