//// Задание 3
//// написать функцию вывода на экран динамического массива
//// реализовать функции 2 и 3 задания в виде шаблонов
//
//int* increaseArray(int* arr, int* size, int Choice, int value, int position) {
//    *size = *size + 1;
//    int* tmp = new int[*size];
//    if (Choice == 1) {
//        for (int i = 0; i < *size; i++) {
//            if (i == *size - 1) {
//                tmp[i] = value;
//            }
//            else {
//                tmp[i] = arr[i];
//            }
//        }
//    }
//    else if (Choice == 2) {
//        for (int i = 0, j = 0; i < *size; i++) {
//            if (i == position) {
//                tmp[i] = value;
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
//
//void coutArray(int* arr, int size) {
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//}