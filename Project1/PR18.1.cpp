//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <random>
//
//using namespace std;
//// Задание 1
//// написать функцию сортировки массива целых чисел 
//// в которой обмен соседних элементов местами реализован с помощью функции swap 
//// следующей сигнатуры : void Swap(int* a, int* b); 
//
//int Sorting(int* arr, int sizeArr); // функция сортировки массива
//void Swap(int* a, int* b); // функция обмена чисел массива
//int myRandom(int a, int b); // функция рандома
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    srand(time(0));
//    const int array1Size = 10; //Величина массива
//    int array1[array1Size];
//    
//    for (size_t i = 0; i < array1Size; i++) {
//        array1[i] = myRandom(0,100); // Присваивание рандомного числа из указанного диапазона
//        cout << array1[i] << endl; // Начальный вывод
//    }
//
//    Sorting(array1, array1Size); // Сортировка массива
//
//    for (size_t i = 0; i < array1Size; i++) {
//        cout << endl << array1[i]; // Итоговый вывод
//    }
//
//    return 0;
//}
//
//int Sorting(int *arr, int sizeArr) { // функция сортировки массива
//    for (size_t i = sizeArr; i > 0; i--) {
//        //int loc;
//        for (int j = 1; j < i; j++) {
//            if (arr[j] < arr[j - 1]) {
//                Swap(&arr[j - 1], &arr[j]);
//            }
//        }
//    }
//    return *arr;
//}
//
//void Swap(int* a, int* b) { // функция обмена чисел массива
//    int c = *a;
//    *a = *b;
//    *b = c;
//}
//
//int myRandom(int min, int max) { // функция рандома
//    static mt19937 gen(random_device{}());
//    uniform_real_distribution<> dis(min, max);
//    return dis(gen);
//}