#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>

using namespace std;

class strings {
public:
    string getword(int random) {
        switch (random) {
        case 1: {
            return "���";
        }
        case 2: {
            return "������";
        }
        case 3: {
            return "�����";
        }
        case 4: {
            return "������";
        }
        case 5: {
            return "�������";
        }
        case 6: {
            return "��������";
        }
        }
    }
};