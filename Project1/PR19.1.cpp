//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//// Задание 1
//// Написать приложение - калькулятор запрашивающее у пользователя 2 числа и операцию над ними.
//// После чего программа должна вывести результат на экран.
////
//// Особое условие - все данные необходимо хранить в куче.
//
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int* firstNum = new int, * secondNum = new int, * operation = new int, * sum = new int{0};
//    
//
//    cout << "Программа калькулятор\n Введите первое число!" << endl;
//    cin >> *firstNum;
//    cout << "Введите второе число!" << endl;
//    cin >> *secondNum;
//
//    cout << "Какую операцию хотите провести?\n1 - '-' вычитание\n2 - '+' сложение\n3 - '*' умножение\n4 - '/' деление без остатка" << endl;
//    cin >> *operation;
//
//    switch (*operation){
//    case 1:
//        *sum = *firstNum - *secondNum;
//        break;
//    case 2:
//        *sum = *firstNum + *secondNum;
//        break;
//    case 3:
//        *sum = *firstNum * *secondNum;
//        break;
//    case 4:
//        *sum = *firstNum / *secondNum;
//        break;
//    default:
//        break;
//    }
//
//    cout << "Итог - " << *sum << endl;
//
//    delete firstNum, secondNum, operation, sum;
//    return 0;
//}