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
            cout << "*\t\t\t\t\tздравствуй дорогой друг!" << endl;
            cout << "*\t\t\t\t\t1.начать игру " << endl;
            cout << "*\t\t\t\t\t2.об игре " << endl;
            cout << "*\t\t\t\t\t3.выход" << endl;
            cout << "********************************************************************************************************" << endl;
            cin >> choice;

            switch (choice) {
            case 1: {
                cout << "*********************************" << endl;
                system("cls");
                return 1;
            }
            case 2: {
                cout << "загадывается слово,твоя задача угадать его последовательно по буквам.у тебя 6 попыток " << endl;
                return 2;
            }
            case 3: {
                cout << "до встречи!!!" << endl;
                return 3;
            }
            default: {
                cout << "выбери один из 3 вариантов." << endl;
                break;
            }
            }
        } while (choice != 3);
    }

};