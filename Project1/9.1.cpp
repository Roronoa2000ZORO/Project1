//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int height, proceed, width, triangle = 1;
//
//    do {
//        cout << "Треугольник № " << triangle << endl;
//        cout << "Ввидите высоту равнобедренных сторон Треугольника!" << endl;
//        cin >> height;
//        cout << "Ввидите ширину основания Треугольника!" << endl;
//        cin >> width;
//
//        for (int i = height; i > 0; i--) {
//           
//            for (int j = i; j < width; j++){
//                
//                cout << "*";
//                
//            }
//
//            cout << endl;
//        }
// 
//        triangle++;
//        cout << "\n0 - Выход\n1 - Продолжить" << endl;
//        cin >> proceed;
//    } while (proceed);
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//    setlocale(LC_ALL, "ru");
//
//    int height;
//
//    cout << "Введите высоту равнобедренного треугольника: ";
//    cin >> height;
//
//    for (int i = 0; i < height; i++){ // 
//
//        for (int j = 1; j < height - i; j++){
//            cout << " ";
//        }
//
//        for (int j = height - 2 * i; j <= height; j++){
//            cout << "^";
//        }
//
//        cout << endl;
//    }
//    
//    return 0;
//}



//#include <iostream>
//#include <string>
//
//using namespace std;
////написать программу которая выводит на экран равнобедренные треугольники широким основанием внизу
////программа запрашивает размер основания и высоту
////программа работает до команды пользователя на прекращение
//
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int height, proceed, width, triangle = 1, loc = 0;
//
//    do {
//        cout << "Треугольник № " << triangle << endl;
//        cout << "Ввидите высоту равнобедренных сторон Треугольника!" << endl;
//        //cin >> height;
//        height = 15;
//        cout << "Ввидите ширину основания Треугольника!" << endl;
//        //cin >> width;
//        width = 20;
//
//        for (int i = 0; i < height; i++) {
//            int forwardSpace = width / 2;
//            int backSpace = 0;
//            forwardSpace -= i;
//            for (int j = 0; j < width; j++) {
//
//                if (forwardSpace == 0) {
//                    if (width - backSpace == j) {
//                        break;
//                    }
//                    else {
//                        cout << "*";
//                    }
//                }
//                else {
//                    cout << " ";
//                }
//                if (forwardSpace > 0) {
//                    forwardSpace--;
//                    backSpace++;
//                }
//            }
//
//            cout << "\n";
//        }
//
//
//
//        triangle++;
//        cout << "\n0 - Выход\n1 - Продолжить" << endl;
//        cin >> proceed;
//    } while (proceed);
//
//    return 0;
//}