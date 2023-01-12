//#include <iostream>
//#include <string>
//
//using namespace std;
//
//enum Suits {
//    Spides = 's', // Множитель 4
//    Diamands = 'd', // Множитель 1
//    Hearts = 'h', // Множитель 2
//    Clubs = 'c', // Множитель 3
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
//    std::cout << "Добро пожаловать в Игру, которая подсчитывает итог очков введенных вами Карт\n" << "Колода включает 52 карты: каждая из которых относится к одной из четырёх мастей (двух цветов) и имеет одно из 13 достоинств, обычно различающиеся по рисунку.\n";
//    std::cout << "!!!ПАМЯТКА!!!\nСимволы обозначения карт для ввода в консоль\n" << "Достоинства карт               Масти карт\n" << "Ace(Туз) = 1                   Spide(Пика) = s\n" << "Two(Двойка) = 2                Diamand(Бубна) = d\n" << "Three(Тройка) = 3              Hearts(Червы) = h\n" << "Four(Четверка) = 4             Clubs(Трефы) = c\n" << "Five(Пятерка) = 5\n" << "six(Шестерка) = 6\n" << "Seven(Семерка) = 7\n" << "Eight(Восмерка) = 8\n" << "Nine(Девятка) = 9\n" << "Ten(Десятка) = 10\n" << "Jack(Валет) = 11\n" << "Queen(Дама) = 12\n" << "King(Кароль) = 13\n";
//    
//    do {
//        number_of_cards++;
//        time_sum = 0;
//
//        std::cout << "Введите достоинство карты под №" << number_of_cards << "!\n";
//        // Обработка введенного Достоинство карты и проверка его на крректность
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
//                std::cout << "Введите корректное Достоинство карты!!!\n";
//                continue;
//            }
//            break;
//        } while (true);
//        // Проверка хочет ли пользователь выйти с игры
//        if (entered_values == 0) {
//            break;
//        }
//        
//        std::cout << "Введите масть карты под №" << number_of_cards << "!\n";
//
//        // Обработка введенной Масти карты и проверка его на крректность
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
//                std::cout << "Введите корректную Масть карты!!!\n";
//                continue;
//            }
//            break;
//        } while (true);
//
//        total_score += time_sum;
//        cout << "Чтобы Выйти с игры введите '0'\n";
//
//        {
//            end_game = (entered_suit != '0');
//        }
//    } while (end_game);
//
//
//    std::cout << "Вы набрали " << total_score << " очков";
//
//
//    return 0;
//}