//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <random>
//
//using namespace std;
//// ������� 3
//// �������� ������� ��������� ���� ��������.
//// ������� ����������� � ���� ���� ���������� �� ������ � �� ����� �������.
//// ���������� �� ����� ��������� � �������
//
//void �ompare(int* arr1First, int* arr1Last, int* arr2First, int* arr2Last); // ������� ���������
//int myRandom(int a, int b); // ������� �������
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    const int arraySize = 10,//�������� �������
//        min = 0, max = 100; // �������� ��������� �����
//    int array1[arraySize], array2[arraySize];
//
//    for (int i = 0; i < arraySize; i++) {
//        // ������������ ���������� �����
//        array1[i] = myRandom(min, max);
//        array2[i] = myRandom(min, max);
//    }
//    for (int i = 0; i < arraySize; i++) {
//        
//        cout << &array1[i] << "  " << &array2[i] << endl;// ��������� �����
//    }
//
//    �ompare(&array1[arraySize - arraySize], &array1[arraySize - 1], &array2[arraySize - arraySize], &array2[arraySize - 1]);
//
//    return 0;
//}
//
//
//void �ompare(int* arr1First, int* arr1Last, int* arr2First, int* arr2Last) { // ������� ���������
//    int sum1 = 0, sum2 = 0;
//    for (int *i = arr1First; i < arr1Last; i++) {
//        sum1 += *i;
//    }
//    for (int* i = arr2First; i < arr2Last; i++) {
//        sum2 += *i;
//    }
//    if (sum1 > sum2) {
//        cout << "����� �������� ������� ������� ������ �������" << endl;
//    }
//    else if (sum1 < sum2){
//        cout << "����� �������� ������� ������� ������ �������" << endl;
//    }
//    else {
//        cout << "����� �������� ���� �������� �����!" << endl;
//    }
//}
//
//int myRandom(int Min, int Max) { // ������� �������
//    static mt19937 gen(random_device{}());
//    uniform_real_distribution<> dis(Min, Max);
//    return dis(gen);
//}