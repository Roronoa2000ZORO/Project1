//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <random>
//
//using namespace std;
//// ������� 1
//// �������� ������� ���������� ������� ����� ����� 
//// � ������� ����� �������� ��������� ������� ���������� � ������� ������� swap 
//// ��������� ��������� : void Swap(int* a, int* b); 
//
//int Sorting(int* arr, int sizeArr); // ������� ���������� �������
//void Swap(int* a, int* b); // ������� ������ ����� �������
//int myRandom(int a, int b); // ������� �������
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    srand(time(0));
//    const int array1Size = 10; //�������� �������
//    int array1[array1Size];
//    
//    for (size_t i = 0; i < array1Size; i++) {
//        array1[i] = myRandom(0,100); // ������������ ���������� ����� �� ���������� ���������
//        cout << array1[i] << endl; // ��������� �����
//    }
//
//    Sorting(array1, array1Size); // ���������� �������
//
//    for (size_t i = 0; i < array1Size; i++) {
//        cout << endl << array1[i]; // �������� �����
//    }
//
//    return 0;
//}
//
//int Sorting(int *arr, int sizeArr) { // ������� ���������� �������
//    for (size_t i = sizeArr; i > 0; i--) {
//        //int loc;
//        for (int j = 1; j < i; j++) {
//            if (arr[j] < arr[j - 1]) {
//                Swap(&arr[j - 1], &arr[j]);
//            }
//        }
//    }
//    return *arr;
//}
//
//void Swap(int* a, int* b) { // ������� ������ ����� �������
//    int c = *a;
//    *a = *b;
//    *b = c;
//}
//
//int myRandom(int min, int max) { // ������� �������
//    static mt19937 gen(random_device{}());
//    uniform_real_distribution<> dis(min, max);
//    return dis(gen);
//}