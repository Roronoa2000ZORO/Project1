//#include<iostream>
//#include<array>
//#include<ctime>
//
//using namespace std;
//
//   // Задание 1.
//   // Создать 2 статических массива одинаковой длинны.
//   // Заполнить случайными числами от 10 до 99
//   // сообщить пользователю сумма значений какого из массивов больше
// 
// 
// 
//int main() {
//    setlocale(LC_ALL, "ru");
//    srand(time(0));
//    const int length{ 10 };
//    std::array<int, length> arr1, arr2;
//    int sum1 = 0, sum2 = 0;
//    
//    for (int i = 0; i < length; i++) {
//        arr1[i] = 10 + ::rand() % 90;
//        sum1 += arr1[i];
//        arr2[i] = 10 + ::rand() % 90;
//        sum2 += arr2[i];
//    }
//
//    std::cout << "Сумма Первого массива составила " << sum1 << " едениц" << std::endl;
//    std::cout << "Сумма Второго массива составила " << sum2 << " едениц" << std::endl;
//
//    if (sum1 > sum2) {
//        std::cout << "Значение суммы Первого массива больше второго " << std::endl;
//    }
//    else if (sum1 < sum2){
//        std::cout << "Значение суммы Второго массива больше первого " << std::endl;
//    }
//    else {
//        std::cout << "Значение суммы Двух массивов одинаковое " << std::endl;
//    }
//
//
//    return 0;
//}