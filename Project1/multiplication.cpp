//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//
//
//
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    srand(time(0));
//    int game_difficulty, easy = 1, medium = 2, hard = 3, number_of_task = 0, first_number, second_number, easy_task = 3, medium_task = 6, hard_task = 10, amount_entered, final_points = 12;
//    bool invalid_input;
//
//    std::cout << "����� ����������!\n������� ���� ������ ������� ���������.\n" << "�������� ������� ���������!\n1. ������\n2. �������\n3. �������\n";
//    std::cin >> game_difficulty;
//
//
//    //������� ���������: ������!
//    while (game_difficulty == easy) {
//        number_of_task++;
//        first_number = 1 + ::rand() % 10;
//        second_number = 1 + ::rand() % 3;
//        std::cout << "������ � " << number_of_task << std::endl << first_number << " * " << second_number << " = ";
//        std::cin >> amount_entered;
//        {
//            invalid_input = ((first_number * second_number) != amount_entered);
//        }
//        if (invalid_input) {
//            std::cout << "����� ��������!\n";
//            final_points -= 4;
//        }
//        else {
//            std::cout << "����� ����������!\n";
//        }
//
//        if (number_of_task == easy_task) {
//            break;
//        }
//    }
//    //������� ���������: �������!
//    while (game_difficulty == medium) {
//        number_of_task++;
//        first_number = 1 + ::rand() % 10;
//        second_number = 1 + ::rand() % 5;
//        std::cout << "������ � " << number_of_task << std::endl << first_number << " * " << second_number << " = ";
//        std::cin >> amount_entered;
//        {
//            invalid_input = ((first_number * second_number) != amount_entered);
//        }
//        if (invalid_input) {
//            std::cout << "����� ��������!\n";
//            final_points -= 2;
//        }
//        else {
//            std::cout << "����� ����������!\n";
//        }
//
//        if (number_of_task == medium_task) {
//            break;
//        }
//    }
//    //������� ���������: �������!
//    while (game_difficulty == hard) {
//        number_of_task++;
//        first_number = 1 + ::rand() % 10;
//        second_number = 1 + ::rand() % 10;
//        std::cout << "������ � " << number_of_task << std::endl << first_number << " * " << second_number << " = ";
//        std::cin >> amount_entered;
//        {
//            invalid_input = ((first_number * second_number) != amount_entered);
//        }
//        if (invalid_input) {
//            std::cout << "����� ��������!\n";
//            final_points -= 4;
//            if (final_points == 0) {
//                std::cout << "�� ���������!\n";
//                break;
//            }
//        }
//        else {
//            std::cout << "����� ����������!\n";
//        }
//
//        if (number_of_task == hard_task) {
//            break;
//        }
//    }
//
//    std::cout << "���� ������ " << final_points << " �� 12";
//
//    return 0;
//}