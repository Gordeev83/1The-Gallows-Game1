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
            return "кот";
        }
        case 2: {
            return "машина";
        }
        case 3: {
            return "робот";
        }
        case 4: {
            return "печать";
        }
        case 5: {
            return "юморист";
        }
        case 6: {
            return "мотоцикл";
        }
        }
    }
};