//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <random>
//
//using namespace std;
//// Задание 3
//// написать функцию сравнения двух массивов.
//// массивы принимаются в виде пары указателей на начало и на конец массива.
//// сравниваем по сумме элементов в массиве
//
//void Сompare(int* arr1First, int* arr1Last, int* arr2First, int* arr2Last); // функция сравнения
//int myRandom(int a, int b); // функция рандома
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    const int arraySize = 10,//Величина массива
//        min = 0, max = 100; // Диапазон рандомных чисел
//    int array1[arraySize], array2[arraySize];
//
//    for (int i = 0; i < arraySize; i++) {
//        // Присваивание рандомного числа
//        array1[i] = myRandom(min, max);
//        array2[i] = myRandom(min, max);
//    }
//    for (int i = 0; i < arraySize; i++) {
//        
//        cout << &array1[i] << "  " << &array2[i] << endl;// Начальный вывод
//    }
//
//    Сompare(&array1[arraySize - arraySize], &array1[arraySize - 1], &array2[arraySize - arraySize], &array2[arraySize - 1]);
//
//    return 0;
//}
//
//
//void Сompare(int* arr1First, int* arr1Last, int* arr2First, int* arr2Last) { // функция сравнения
//    int sum1 = 0, sum2 = 0;
//    for (int *i = arr1First; i < arr1Last; i++) {
//        sum1 += *i;
//    }
//    for (int* i = arr2First; i < arr2Last; i++) {
//        sum2 += *i;
//    }
//    if (sum1 > sum2) {
//        cout << "Сумма значений первого массива больше второго" << endl;
//    }
//    else if (sum1 < sum2){
//        cout << "Сумма значений второго массива больше первого" << endl;
//    }
//    else {
//        cout << "Сумма значений двух массивов равны!" << endl;
//    }
//}
//
//int myRandom(int Min, int Max) { // функция рандома
//    static mt19937 gen(random_device{}());
//    uniform_real_distribution<> dis(Min, Max);
//    return dis(gen);
//}