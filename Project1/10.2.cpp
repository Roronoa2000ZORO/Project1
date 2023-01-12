//#include<iostream>
//#include<array>
//#include<ctime>
//
//using namespace std;
//
//
////Задание 2
//
////В статическом массиве содержащем 50 случайно сгенерированных целых чисел от 100 до 999
//
////посчитать сколько чисел начиналось с каждой из цифр от 0 до 9
//
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    srand(time(0));
//
//    const int length{ 50 }, numbersToCount { 9 };
//
//    array<int, length> arr1;
//    array<int, numbersToCount> sumOfValues;
//    int firstNumber, figure = 1;
//    
//    for (int i = 0; i < numbersToCount; i++) { // Обнуленине Массива sumOfValues
//        sumOfValues[i] = 0;
//    }
//
//    for (int i = 0; i < length; i++) {
//        arr1[i] = 100 + ::rand() % 900; //Генерация чисел для массива
//
//        
//        
//        firstNumber = arr1[i] / 100; //Определение в какую группу входят
//
//        switch (firstNumber) { // Подсчет и суммирование первых чисел
//
//        case 1:
//            sumOfValues[0]++;
//            break;
//        case 2:
//            sumOfValues[1]++;
//            break;
//        case 3:
//            sumOfValues[2]++;
//            break;
//        case 4:
//            sumOfValues[3]++;
//            break;
//        case 5:
//            sumOfValues[4]++;
//            break;
//        case 6:
//            sumOfValues[5]++;
//            break;
//        case 7:
//            sumOfValues[6]++;
//            break;
//        case 8:
//            sumOfValues[7]++;
//            break;
//        case 9:
//            sumOfValues[8]++;
//            break;
//
//        };
//    }
//
//    cout << "Всего числа начинались с\n";
//    for (int i = 0; i < numbersToCount; i++) { 
//        cout << figure << "- " << sumOfValues[i] << " раз\n"; // Итог
//        figure++;
//    }
//
//    return 0;
//}