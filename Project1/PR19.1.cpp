//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//// ������� 1
//// �������� ���������� - ����������� ������������� � ������������ 2 ����� � �������� ��� ����.
//// ����� ���� ��������� ������ ������� ��������� �� �����.
////
//// ������ ������� - ��� ������ ���������� ������� � ����.
//
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int* firstNum = new int, * secondNum = new int, * operation = new int, * sum = new int{0};
//    
//
//    cout << "��������� �����������\n ������� ������ �����!" << endl;
//    cin >> *firstNum;
//    cout << "������� ������ �����!" << endl;
//    cin >> *secondNum;
//
//    cout << "����� �������� ������ ��������?\n1 - '-' ���������\n2 - '+' ��������\n3 - '*' ���������\n4 - '/' ������� ��� �������" << endl;
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
//    cout << "���� - " << *sum << endl;
//
//    delete firstNum, secondNum, operation, sum;
//    return 0;
//}