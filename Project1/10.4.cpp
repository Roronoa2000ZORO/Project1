//#include <iostream>
//#include <array>
//#include <random>
//#include <chrono>
//
//using namespace std;
//
//
//float myRandom(float a, float b) { // функция рандома для чисел с плавающей запятой
//
//    static mt19937 gen(random_device{}());
//    uniform_real_distribution<float> dis(a, b);
//    return dis(gen);
//}
//int searchEmployee(float result, int employees,  float salaries[]) { // Функция для поиска сотрудника с наиболее близким жалованием к Медианному значению
//    int closeValuePositive = 0, closeValueNegative = 0;
//    float positiveValue = 45000, negativeValue = -45000;
//
//    for (int i = 0; i < employees; i++) {
//        if (salaries[i] == result) { // Поиск в нечетном количестве сотрудников
//            return i;
//        }// Далее поиск в четном количестве сотрудников
//        else if(result > salaries[i]){ 
//            
//            if (salaries[i] - result  > negativeValue) { // Поиск первого из двух наиболее близких к медиане
//                negativeValue = salaries[i] - result;
//                closeValueNegative = i; 
//            }
//        }
//        else {
//            if (salaries[i] - result < positiveValue) { // Поиск второго из двух наиболее близких к медиане
//                positiveValue = salaries[i] - result;
//                closeValuePositive = i;
//            }
//        }
//    }
//    // определение какой из двух сотрудников наиболее близок к медиане
//    if (negativeValue + positiveValue < 0) {
//        return closeValuePositive;
//    }
//    else if (negativeValue + positiveValue > 0) {
//        return closeValueNegative;
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    
//    int numberOfEmployees, firstMedian, secondMedian, desiredEmployee;
//    cout << "Введите штат сотрудников!" << endl;
//    do{
//        cin >> numberOfEmployees;
//        if (numberOfEmployees < 1) {
//            cout << "Введите положительное число" << endl;
//        }
//    } while (numberOfEmployees < 1); // Проверка на ввод положительного числа
//    const float min = 15000, max = 60000; // рандомизация зарплаты в диапазоне 15000 и 60000 рублей
//    float *salaryResults = new float[numberOfEmployees], *testSalaryResults = new float[numberOfEmployees];
//    float medianValue, sortValue, sum;
//
//    for (int i = 0; i < numberOfEmployees; i++) { // заполнение массива с зарплатами
//        
//        testSalaryResults[i] = myRandom(min, max); // Присваивание случайного числа
//        salaryResults[i] = testSalaryResults[i];
//    }
//
//    for (int i = 0; i < numberOfEmployees - 1; i++) {
//        for(int j = 0; j < numberOfEmployees - i - 1; j++){ // сортировка Массива по возростанию. 
//            // Выражение условия, которое прописано в цикле, сокращает каждую последующую итерацию, отбрасывая самое высокое значение.
//
//            if (testSalaryResults[j] > testSalaryResults[j + 1]) {
//                // меняем элементы местами
//                sortValue = testSalaryResults[j];
//                testSalaryResults[j] = testSalaryResults[j + 1];
//                testSalaryResults[j + 1] = sortValue;
//            }
//        }
//    }
//
//    cout.setf(ios::fixed);
//    cout.precision(2);
//    if (numberOfEmployees % 2 == 0) { // Четное значение
//        firstMedian = numberOfEmployees / 2; // Первая медиана
//        secondMedian = numberOfEmployees / 2 - 1; // Вторая медиана
//        sum = testSalaryResults[firstMedian] + testSalaryResults[secondMedian]; // Сумма двух медиан
//        medianValue = sum / 2; // Получаем медианное значение
//        cout << "Сотрудник №" << searchEmployee(medianValue, numberOfEmployees, salaryResults) + 1;
//        cout << " его жалование наиболее близкое к медианному значению " << medianValue << " рублей" << endl;
//    }
//    else { // Нечетное значение
//        medianValue = testSalaryResults[numberOfEmployees / 2];
//        cout << "Сотрудник №" << searchEmployee(medianValue, numberOfEmployees, salaryResults) + 1;
//        cout << " его жалование наиболее близкое к медианному значению " << medianValue << " рублей" << endl;
//    }
//    
//    delete[] testSalaryResults, salaryResults;
//    return 0;
//}