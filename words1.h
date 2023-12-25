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
            cout << "это слово из 3 букв,домашнее животное,пушистое)" << endl;
            break;
        }
        case 2: {
            cout << "это слово из 5 букв,любим ездить на ней, когда не хотим ехать в транспорте" << endl;
            break;
        }
        case 3: {
            cout << "это слово из 5 букв,век технологий с помощью этих созданий говорят нам станет проще жить" << endl;
            break;
        }
        case 4: {
            cout << "это слово из 6 букв,предмет юридический,наличие его в документе подтверждает юридическую силу" << endl;
            break;
        }
        case 5: {
            cout << "это слово из 7 букв,благодаря этим людям жизнь приобретает веселый характер" << endl;
            break;
        }
        case 6: {
            cout << "это слово из 8 букв,специфический вид транспорта с высоким шумом" << endl;
            break;
        }
        }
    }
};