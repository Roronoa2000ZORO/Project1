//#include <iostream>
//#include <array>
//#include <chrono>
//#include <ctime>
//#include <random>
//#include <iomanip>
//
//using namespace std;
//
////������� 2.
////�������� ���������, ���������� �������� 2 - � �������� �������� 5 ��������� ������ � ���� ������ �������� 10 ��������� ��������� �������: 
////������� ���������� ��������������� ��� ��������, ������ 0,
////����� ��������������� ��� ��������, ������ 0, � �����
////��������������� ��� ��������, ������� 0.
//
//int myRandom(int a, int b);
//
//const int Min = -100, Max = 100, little = 5, a_lotOf = 10;
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    array<int, little> dataFirstLittle;
//    array<int, little> dataSecondLittle;
//    array<int, a_lotOf> lotOfData;
//
//    for (size_t i = 0; i < little; i++) { // ���������� ����� ��������
//        dataFirstLittle[i] = myRandom(Min, Max);
//        dataSecondLittle[i] = myRandom(Min, Max);
//    }
//    for (size_t i = 0; i < dataFirstLittle.size(); i++) { // ����� ������� ������ �������
//        cout << setw(5) << dataFirstLittle[i];
//    }
//    cout << "\n \n" << endl;
//    for (size_t i = 0; i < dataSecondLittle.size(); i++) { // ����� ������� ������ �������
//        cout << setw(5) << dataSecondLittle[i];
//    }
//
//    cout << "\n\n������ �1" << endl;
//    // !!! ������ ������ !!!
//    int head = 0, tail = lotOfData.size() - 1;
//
//    for (int h = 0, t = dataFirstLittle.size() - 1; h <= t;) { // ����������� ������� ������ ������� � �������, � ������ ��� �������
//        if (dataFirstLittle[h] > 0) {
//            lotOfData[head] = dataFirstLittle[h];
//            head++;
//            h++;
//        }
//        else if (dataFirstLittle[h] < 0) {
//            lotOfData[tail] = dataFirstLittle[h];
//            tail--;
//            h++;
//        }
//        else {
//            h++;
//        }
//        if (dataFirstLittle[t] > 0 && h <= t) {
//            lotOfData[head] = dataFirstLittle[t];
//            head++;
//            t--;
//        }
//        else if (dataFirstLittle[t] < 0 && h <= t) {
//            lotOfData[tail] = dataFirstLittle[t];
//            tail--;
//            t--;
//        }
//        else {
//            t--;
//        }
//    }
//    for (int h = 0, t = dataSecondLittle.size() - 1; h <= t;) { // ����������� ������� ������ ������� � �������, � ������ ��� �������
//        if (dataSecondLittle[h] > 0) {
//            lotOfData[head] = dataSecondLittle[h];
//            head++;
//            h++;
//        }
//        else if (dataSecondLittle[h] < 0) {
//            lotOfData[tail] = dataSecondLittle[h];
//            tail--;
//            h++;
//        }
//        else {
//            h++;
//        }
//        if (dataSecondLittle[t] > 0 && h <= t) {
//            lotOfData[head] = dataSecondLittle[t];
//            head++;
//            t--;
//        }
//        else if (dataSecondLittle[t] < 0 && h <= t) {
//            lotOfData[tail] = dataSecondLittle[t];
//            tail--;
//            t--;
//        }
//        else {
//            t--;
//        }
//    }
//
//    while (head <= tail) { // ������� ��������� ������
//        
//        lotOfData[head] = 0;
//        head++;
//    }
//    for (size_t i = 0; i < lotOfData.size(); i++) { // �������� ����� 1
//        cout << setw(5) << lotOfData[i];
//    }
//
//
//    cout << "\n\n������ �2" << endl;
//    // !!! ������ ������ !!!
//    head = 0, tail = lotOfData.size() - 1;
//
//    for (int h = 0, t = little - 1; h <= t;) { // ����������� ���� ��������� ������ ����
//        if (dataFirstLittle[h] > 0) {
//            lotOfData[head] = dataFirstLittle[h];
//            head++;
//        }
//        if (dataSecondLittle[h] > 0) {
//            lotOfData[head] = dataSecondLittle[h];
//            head++;
//        }
//        h++;
//        if (h > t) { continue; }
//        if (dataFirstLittle[t] > 0) {
//            lotOfData[head] = dataFirstLittle[t];
//            head++;
//        }
//        if (dataSecondLittle[t] > 0) {
//            lotOfData[head] = dataSecondLittle[t];
//            head++;
//        }
//        t--;
//    }
//    for (int h = 0, t = little - 1; h <= t;) { // ����������� ���� ��������� ������ ����
//        if (dataFirstLittle[h] < 0) {
//            lotOfData[tail] = dataFirstLittle[h];
//            tail--;
//        }
//        if (dataSecondLittle[h] < 0) {
//            lotOfData[tail] = dataSecondLittle[h];
//            tail--;
//        }
//        h++;
//        if (h > t) { continue; }
//        if (dataFirstLittle[t] < 0) {
//            lotOfData[tail] = dataFirstLittle[t];
//            tail--;
//        }
//        if (dataSecondLittle[t] < 0) {
//            lotOfData[tail] = dataSecondLittle[t];
//            tail--;
//        }
//        t--;
//    }
//
//    while (head <= tail) { // ������� ��������� ������
//
//        lotOfData[head] = 0;
//        head++;
//    }
//    
//    for (size_t i = 0; i < lotOfData.size(); i++) { // �������� ����� 2
//        cout << setw(5) << lotOfData[i];
//    }
//    return 0;
//}
//
//int myRandom(int a, int b) { // ������� �������
//
//    static mt19937 gen(random_device{}());
//    uniform_real_distribution<> dis(a, b);
//    return dis(gen);
//}