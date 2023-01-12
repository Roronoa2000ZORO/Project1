//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//// Задание 2
//// написать следующие функции работы с массивом :
//// создание динамического массива заданной длинны
//// размещения нового элемента в конце массива(размер массива увеличивается)
//// размещения нового элемента в указанной позиции массива(размер массива увеличивается)
//int *increaseArray(int* arr, int* size, int Choice, int val, int pos);
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int size, value1, choice, position = 0;
//    int* array1;
//
//    cout << "Введите длинну массива!\n_________\n";
//    cin >> size;
//    array1 = new int[size];
//
//    for (int i = 0; i < size; i++) {
//        array1[i] = 0;
//        cout << array1[i] << " ";
//    }
//    
//
//    cout << "\n1 - разместить новый элемент в конце массива\n2 - разместить новый элемент в произвольной позиции\n";
//    cin >> choice;
//    cout << "Введите значение нового элемента!";
//    cin >> value1;
//    if (choice == 2) {
//        cout << "Введите позицию нового элемента!";
//        cin >> position;
//    }
//    
//    array1 = increaseArray(array1, &size, choice, value1, position);
//    cout << endl;
//    for (int i = 0; i < size; i++) {
//        cout << array1[i] << " ";
//    }
//    
//    delete[] array1;
//    
//    return 0;
//}
//
//
//int *increaseArray(int* arr, int* size, int Choice, int val, int pos) {
//    *size = *size + 1;
//    int* tmp = new int[*size];
//    if(Choice == 1){
//        for (int i = 0; i < *size; i++) {
//            if (i == *size - 1) {
//                tmp[i] = val;
//            }
//            else {
//            tmp[i] = arr[i];
//            }
//        }
//    }
//    else if (Choice == 2) {
//        for (int i = 0, j = 0; i < *size; i++) {
//            if (i == pos) {
//                tmp[i] = val;
//                j++;
//            }
//            else {
//                tmp[i] = arr[i - j];
//            }
//        }
//    }
//    int* holder = tmp;
//    tmp = arr;
//    arr = holder;
//    delete[] tmp;
//    tmp = nullptr;
//    return arr;
//}