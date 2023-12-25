#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>


using namespace std;
// Новый класс, отслеживающий состояние игры - количество ошибок и угаданные буквы
class game {
public:
    int errors; // Количество ошибок
    string word; // Загаданное слово
    vector<char> guessed; // Угаданные буквы
};