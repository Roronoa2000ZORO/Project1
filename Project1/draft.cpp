#include<iostream>
#include<string>
#include <iomanip>

using namespace std;
string TextСompression(string str1, string alphabetEN);

int main() {
    bool situationsWithSigns;
    string str1 = "    Meteorite      crashed on   my  head    !  ";
    //Алфавит (Английский)
    string alphabetEN = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //Алфавит (Русский)
    string alphabetRU = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
    //Символы которые не требуют пробела после слов при необходимости добавлять доп. знаки
    string signs = ".,!?:;";
    size_t i;
    //Задание 2: Сжатие текста
    //string TextСompression(string);
    cout << str1 << "\n" << "____________________" << endl;
    i = str1.find_first_of(alphabetEN);
    while (i < str1.size()) {
        {
            situationsWithSigns = signs.size() > signs.find(str1[i + 1]);
        }
        if (str1[i] == str1[i + 1] || situationsWithSigns) {
            i = str1.find(" ", i);
            str1.erase(str1.begin() + i);
        }
        else {
            i = str1.find(" ", i + 1);
        }
    }
    cout << TextСompression(str1, alphabetEN) << endl;

    //Задание 2: Удаление комментариев

    string str2_1 = "int main(){std::cout << 5 * 6/*произвидением этих чисел будет 30*/ << std::endl;}";
    string str2_2 = "int main(){std::cout << 5 * 6 << std::endl;// Конец end}";
    string str2_3 = "//int main(){std::cout << 5 * 6 << std::endl;}";
    string str2_4 = "//int main(){std::cout << 5 * 6/*произвидением этих чисел будет 30*/ << std::endl;}// End";


    return 0;
}

