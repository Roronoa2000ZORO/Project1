//#include <iostream>
//#include <array>
//#include <chrono>
//#include <ctime>
//#include <random>
//#include <iomanip>
//
//using namespace std;
//
//// Задание 1. 
////Сжать(сдвинуть элементы) массив, удалив из него все 0, 
////и заполнить освободившиеся справа элементы значениями - 1.
//
//int myRandom(int a, int b);
//
//const int Min = 0, Max = 2, num = 1000;
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    array<int, num> data;
//    int zero = 0;
//
//    for (size_t i = 0; i < data.size(); i++ ) {
//        data[i] = myRandom(Min, Max);
//        if (data[i] == 0) {
//            zero++;
//        }
//    }
//    for (size_t i = 0; i < data.size(); i++) { // Предитоговый вывод
//        cout << setw(5) << data[i];
//    }
//
//    cout << "\n \n" << endl;
//    for (int head = 0, tail = data.size() - 1; head < tail;) {
//        
//        while (data[head] < 0 && head < tail) {
//            head++;
//        }
//        if (data[head] == 0) {
//            data[head] = -1;
//        }
//        while (data[tail] > 0 && head < tail) {
//            tail--;
//        }
//        if (data[tail] == 0) {
//            data[tail] = -1;
//        }
//        int tmp = data[tail];
//        data[tail] = data[head];
//        data[head] = tmp;
//    }
//    for (size_t i = 0; i < data.size(); i++) { // Итоговый вывод
//        cout << setw(5) << data[i];
//    }
//    cout << "\nКоличество замененных нулей " << zero << endl;
//    return 0;
//}
//
//int myRandom(int a, int b) { // функция рандома
//
//    static mt19937 gen(random_device{}());
//    uniform_real_distribution<> dis(a, b);
//    return dis(gen);
//}