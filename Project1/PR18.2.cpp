//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <random>
//
//using namespace std;
//// Задание 2
//// написать функцию поиска максимального элемента в неотсортированном массиве
//// должна возвращать адрес максимального элемента
//
//int *Search(int* arr, int sizeArr, int Min); // функция поиска наибольшего числа массива
//int myRandom(int a, int b); // функция рандома
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    srand(time(0));
//    const int array1Size = 10,//Величина массива
//        min = 100, max = 1000; // Диапазон рандомных чисел
//    int array1[array1Size];
//
//    for (size_t i = 0; i < array1Size; i++) {
//        array1[i] = myRandom(min, max); // Присваивание рандомного числа
//        cout << array1[i] << "  " << &array1[i] << endl;// Начальный вывод
//    }
//
//    cout << endl << Search(array1, array1Size, min) << " - адрес наибольшего числа массива" << endl; // Итоговый вывод
//
//    return 0;
//}
//
//int *Search(int* arr, int sizeArr, int Min) { // функция поиска наибольшего числа массива
//    int* maxValue = &Min;
//    for (size_t i = 0; i < sizeArr; i++) {
//        if (arr[i] > *maxValue) {
//            maxValue = &arr[i];
//        }
//    }
//    return maxValue;
//}
//
//int myRandom(int Min, int Max) { // функция рандома
//    static mt19937 gen(random_device{}());
//    uniform_real_distribution<> dis(Min, Max);
//    return dis(gen);
//}