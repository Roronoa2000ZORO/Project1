#include<iostream>
#include<string>
#include <iomanip>

using namespace std;
string Text�ompression(string str1, string alphabetEN);

int main() {
    bool situationsWithSigns;
    string str1 = "    Meteorite      crashed on   my  head    !  ";
    //������� (����������)
    string alphabetEN = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //������� (�������)
    string alphabetRU = "�������������������������������������Ũ��������������������������";
    //������� ������� �� ������� ������� ����� ���� ��� ������������� ��������� ���. �����
    string signs = ".,!?:;";
    size_t i;
    //������� 2: ������ ������
    //string Text�ompression(string);
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
    cout << Text�ompression(str1, alphabetEN) << endl;

    //������� 2: �������� ������������

    string str2_1 = "int main(){std::cout << 5 * 6/*������������� ���� ����� ����� 30*/ << std::endl;}";
    string str2_2 = "int main(){std::cout << 5 * 6 << std::endl;// ����� end}";
    string str2_3 = "//int main(){std::cout << 5 * 6 << std::endl;}";
    string str2_4 = "//int main(){std::cout << 5 * 6/*������������� ���� ����� ����� 30*/ << std::endl;}// End";


    return 0;
}

