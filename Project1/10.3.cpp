//#include <iostream>
//#include <array>
//#include <random>
//#include <chrono>
//
//using namespace std;
//
//
//// ������� 3
//
//// � ������ ����������� ������� � ����������� ����������� �������� 100
//
//// ��������� ���������� �� 4.5 �� 15.6
//
//// ����� ����� ����� ��� ������ ����� ��������� � ����� ��������� �������� ������� ��� ������
//
//
//float myRandom(float a, float b) // ������� ������� ��� ����� � ��������� �������
//{
//    static mt19937 gen(random_device{}());
//    uniform_real_distribution<float> dis(a, b);
//    return dis(gen);
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    
//    const int numberOfParticipants{ 100 };
//    const float min = { 4.5 }, max = { 15.6 };
//    array<float, numberOfParticipants> raceResults;
//    float bestResult = min, worstResult = max, average, sum = 0;
//
//    for (int i = 0; i < numberOfParticipants; i++) {
//        
//        raceResults[i] = myRandom(min, max); // ������������ ���������� �����
//
//        
//        if (raceResults[i] > bestResult) { // ����� ������� ����������
//            bestResult = raceResults[i];
//        }
//        else if (raceResults[i] < worstResult) { // ����� ������� ����������
//            worstResult = raceResults[i];
//        }
//        sum += raceResults[i]; // �������� ��� ��������� ������ �������� ��������
//    }
//    average = (sum / numberOfParticipants); // ����� �������� �������� ��� ������
//
//    cout.setf(ios::fixed);
//    cout.precision(1); // ��� ������ ����� ����� ����� �������
//
//    cout << "������ ��������� - " << worstResult << "\n������� ��������� - " << average << "\n������ ��������� - " << bestResult;
//
//    return 0;
//}