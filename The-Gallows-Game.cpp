#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"menu1.h"
#include"words1.h"
#include"strings1.h"
#include"illustration1.h"
#include"game1.h"


using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    menu menu1;
    menu1.showmenu();
    words words1;
    strings strings1;
    illustration illustration1;
    game game1;

    // Добавляем генерацию случайного числа для выбора загаданного слова
    srand(time(0));
    int random = rand() % 6 + 1;

    words1.displayword(random);
    game1.word = strings1.getword(random);

    // Игровой цикл
    while (true) {
        char guess;
        cout << "Введите букву: ";
        cin >> guess;

        bool correct = false;

        // Проверяем, есть ли угаданная буква в слове
        for (char c : game1.word) {
            if (c == guess) {
                game1.guessed.push_back(guess);
                correct = true;
            }
        }

        if (!correct) {
            game1.errors++;
        }

        cout << "Угаданные буквы: ";
        for (char c : game1.guessed) {
            cout << c << " ";
        }
        cout << endl;

        illustration1.show(game1.errors);

        // Проверка на проигрыш (количество ошибок равно 6)
        if (game1.errors >= 6) {
            cout << "Вы проиграли. Загаданное слово: " << game1.word << endl;
            break;
        }

        // Проверка на победу (все буквы угаданы)
        bool allGuessed = true;
        for (char c : game1.word) {
            bool found = false;
            for (char g : game1.guessed) {
                if (c == g) {
                    found = true;
                }
            }
            if (!found) {
                allGuessed = false;
                break;
            }
        }
        if (allGuessed) {
            cout << "Поздравляем! Вы угадали слово: " << game1.word << endl;
            break;
        }
    }

    return 0;
}