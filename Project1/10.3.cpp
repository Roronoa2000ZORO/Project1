//#include <iostream>
//#include <array>
//#include <random>
//#include <chrono>
//
//using namespace std;
//
//
//// Задание 3
//
//// В массив результатов забегов с олимпийской стометровки размером 100
//
//// заполнены показатели от 4.5 до 15.6
//
//// найти какой бегун был первым какой последним и какой результат является средним для забега
//
//
//float myRandom(float a, float b) // функция рандома для чисел с плавающей запятой
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
//        raceResults[i] = myRandom(min, max); // Присваивание случайного числа
//
//        
//        if (raceResults[i] > bestResult) { // Отбор лучшего результата
//            bestResult = raceResults[i];
//        }
//        else if (raceResults[i] < worstResult) { // Отбор худшего результата
//            worstResult = raceResults[i];
//        }
//        sum += raceResults[i]; // Суммирую для далнешего поиска среднего значения
//    }
//    average = (sum / numberOfParticipants); // Отбор Среднего значение для забега
//
//    cout.setf(ios::fixed);
//    cout.precision(1); // для вывода одной цыфры после запятой
//
//    cout << "Худший результат - " << worstResult << "\nСредний результат - " << average << "\nЛучший результат - " << bestResult;
//
//    return 0;
//}