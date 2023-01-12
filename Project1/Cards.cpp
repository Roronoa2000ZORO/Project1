//#include <iostream>
//#include <string>
//
//using namespace std;
//
//enum Suits {
//    Spides = 's', // ��������� 4
//    Diamands = 'd', // ��������� 1
//    Hearts = 'h', // ��������� 2
//    Clubs = 'c', // ��������� 3
//};
//
//
//enum Values {
//    Ace = 1, two, three, four, five, six, seven, eight, nine, ten,
//    Jack,
//    Queen,
//    King,
//};
//
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int entered_values, total_score = 0, time_sum, min_point = 1, max_point = 10, spide_multiplier = 4, diamand_multiplier = 1, heart_multiplier = 2, club_multiplier = 3, number_of_cards = 0;
//    char entered_suit;
//    bool end_game;
//
//    std::cout << "����� ���������� � ����, ������� ������������ ���� ����� ��������� ���� ����\n" << "������ �������� 52 �����: ������ �� ������� ��������� � ����� �� ������ ������ (���� ������) � ����� ���� �� 13 ����������, ������ ������������� �� �������.\n";
//    std::cout << "!!!�������!!!\n������� ����������� ���� ��� ����� � �������\n" << "����������� ����               ����� ����\n" << "Ace(���) = 1                   Spide(����) = s\n" << "Two(������) = 2                Diamand(�����) = d\n" << "Three(������) = 3              Hearts(�����) = h\n" << "Four(��������) = 4             Clubs(�����) = c\n" << "Five(�������) = 5\n" << "six(��������) = 6\n" << "Seven(�������) = 7\n" << "Eight(��������) = 8\n" << "Nine(�������) = 9\n" << "Ten(�������) = 10\n" << "Jack(�����) = 11\n" << "Queen(����) = 12\n" << "King(������) = 13\n";
//    
//    do {
//        number_of_cards++;
//        time_sum = 0;
//
//        std::cout << "������� ����������� ����� ��� �" << number_of_cards << "!\n";
//        // ��������� ���������� ����������� ����� � �������� ��� �� �����������
//        do {
//            std::cin >> entered_values;
//
//            switch (entered_values) {
//            case 0:
//                break;
//            case Values::Ace:
//                time_sum += min_point;
//                break;
//            case Values::two:
//                time_sum += entered_values;
//                break;
//            case Values::three:
//                time_sum += entered_values;
//                break;
//            case Values::four:
//                time_sum += entered_values;
//                break;
//            case Values::five:
//                time_sum += entered_values;
//                break;
//            case Values::six:
//                time_sum += entered_values;
//                break;
//            case Values::seven:
//                time_sum += entered_values;
//                break;
//            case Values::eight:
//                time_sum += entered_values;
//                break;
//            case Values::nine:
//                time_sum += entered_values;
//                break;
//            case Values::ten:
//                time_sum += entered_values;
//                break;
//            case Values::Jack:
//                time_sum += max_point;
//                break;
//            case Values::Queen:
//                time_sum += max_point;
//                break;
//            case Values::King:
//                time_sum += max_point;
//                break;
//            default:
//                std::cout << "������� ���������� ����������� �����!!!\n";
//                continue;
//            }
//            break;
//        } while (true);
//        // �������� ����� �� ������������ ����� � ����
//        if (entered_values == 0) {
//            break;
//        }
//        
//        std::cout << "������� ����� ����� ��� �" << number_of_cards << "!\n";
//
//        // ��������� ��������� ����� ����� � �������� ��� �� �����������
//        do {
//            std::cin >> entered_suit;
//
//            switch (entered_suit) {
//            case '0':
//                break;
//            case Suits::Spides:
//                time_sum *= spide_multiplier;
//                break;
//            case Suits::Diamands:
//                time_sum *= diamand_multiplier;
//                break;
//            case Suits::Hearts:
//                time_sum *= heart_multiplier;
//                break;
//            case Suits::Clubs:
//                time_sum *= club_multiplier;
//                break;
//            default:
//                std::cout << "������� ���������� ����� �����!!!\n";
//                continue;
//            }
//            break;
//        } while (true);
//
//        total_score += time_sum;
//        cout << "����� ����� � ���� ������� '0'\n";
//
//        {
//            end_game = (entered_suit != '0');
//        }
//    } while (end_game);
//
//
//    std::cout << "�� ������� " << total_score << " �����";
//
//
//    return 0;
//}