//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <random>
//
//using namespace std;
//// ������� 2
//// �������� ������� ������ ������������� �������� � ����������������� �������
//// ������ ���������� ����� ������������� ��������
//
//int *Search(int* arr, int sizeArr, int Min); // ������� ������ ����������� ����� �������
//int myRandom(int a, int b); // ������� �������
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    srand(time(0));
//    const int array1Size = 10,//�������� �������
//        min = 100, max = 1000; // �������� ��������� �����
//    int array1[array1Size];
//
//    for (size_t i = 0; i < array1Size; i++) {
//        array1[i] = myRandom(min, max); // ������������ ���������� �����
//        cout << array1[i] << "  " << &array1[i] << endl;// ��������� �����
//    }
//
//    cout << endl << Search(array1, array1Size, min) << " - ����� ����������� ����� �������" << endl; // �������� �����
//
//    return 0;
//}
//
//int *Search(int* arr, int sizeArr, int Min) { // ������� ������ ����������� ����� �������
//    int* maxValue = &Min;
//    for (size_t i = 0; i < sizeArr; i++) {
//        if (arr[i] > *maxValue) {
//            maxValue = &arr[i];
//        }
//    }
//    return maxValue;
//}
//
//int myRandom(int Min, int Max) { // ������� �������
//    static mt19937 gen(random_device{}());
//    uniform_real_distribution<> dis(Min, Max);
//    return dis(gen);
//}