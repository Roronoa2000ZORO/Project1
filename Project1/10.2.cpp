//#include<iostream>
//#include<array>
//#include<ctime>
//
//using namespace std;
//
//
////������� 2
//
////� ����������� ������� ���������� 50 �������� ��������������� ����� ����� �� 100 �� 999
//
////��������� ������� ����� ���������� � ������ �� ���� �� 0 �� 9
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
//    for (int i = 0; i < numbersToCount; i++) { // ���������� ������� sumOfValues
//        sumOfValues[i] = 0;
//    }
//
//    for (int i = 0; i < length; i++) {
//        arr1[i] = 100 + ::rand() % 900; //��������� ����� ��� �������
//
//        
//        
//        firstNumber = arr1[i] / 100; //����������� � ����� ������ ������
//
//        switch (firstNumber) { // ������� � ������������ ������ �����
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
//    cout << "����� ����� ���������� �\n";
//    for (int i = 0; i < numbersToCount; i++) { 
//        cout << figure << "- " << sumOfValues[i] << " ���\n"; // ����
//        figure++;
//    }
//
//    return 0;
//}