//#include<iostream>
//#include<array>
//#include<ctime>
//
//using namespace std;
//
//   // ������� 1.
//   // ������� 2 ����������� ������� ���������� ������.
//   // ��������� ���������� ������� �� 10 �� 99
//   // �������� ������������ ����� �������� ������ �� �������� ������
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
//    std::cout << "����� ������� ������� ��������� " << sum1 << " ������" << std::endl;
//    std::cout << "����� ������� ������� ��������� " << sum2 << " ������" << std::endl;
//
//    if (sum1 > sum2) {
//        std::cout << "�������� ����� ������� ������� ������ ������� " << std::endl;
//    }
//    else if (sum1 < sum2){
//        std::cout << "�������� ����� ������� ������� ������ ������� " << std::endl;
//    }
//    else {
//        std::cout << "�������� ����� ���� �������� ���������� " << std::endl;
//    }
//
//
//    return 0;
//}