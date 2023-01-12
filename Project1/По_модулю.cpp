//#include <iostream>
//#include <string>
//using namespace std;
///*
//1. создать структуру "работник" состоящую из полей:
//    индивидуальный номер
//    имя
//    в дневной или ночной смене человек
//    зарплата
//2. Функция вывода на экран информации о сотруднике
//3. Создать коллекцию в N сотрудников информация берётся случайная, имена генерируются как "Сотрудник#" где # Его номер
//4. Вывести на экран отдельно всех дневных сотрудников, всех ночных сотрудников.
//5. Вывести на экран Трех сотрудников с самой высокой зарплатой среди дневных среди ночных и среди всех тремя разными списками
//6. Сохранить в файл выведенную в 5 пункте на экран информацию
//*/
//
//struct worker {
//
//    int index_number, salary;
//    bool shift;
//    string name;
//
//};
//struct workers {
//    int amount;
//    worker *data;
//};
//
//void Print(const worker& obj) {
//    cout << "ID:" << obj.index_number << endl << "Name:" << obj.name << endl << "Shift:" << obj.shift << endl << "Salary:" << obj.salary << endl;
//};
//
//workers Generate(int num) {
//    workers result{ num, new worker[num]{} };
//    for (int i = 0; i < result.amount; i++) {
//        result.data[i].index_number = i + 1;
//        result.data[i].name = "Worker " + to_string(i+1);
//        result.data[i].shift = (::rand()%2)?true:false;
//        result.data[i].salary = 10000+::rand();
//    }
//    return result;
//}
//
//
//
//int main() {
//
//    setlocale(LC_ALL, "ru");
//    workers employee;
//    cout << "Дневные сотрудники!" << endl;
//
//    for (true) {
//        
//    }
//    
//  
//
//
//
//
//
//
//
//
//
//
//
//   return 0;
//}