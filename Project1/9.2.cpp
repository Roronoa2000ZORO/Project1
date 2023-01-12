//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int height, proceed, width, enter;
//
//    do {
//        
//        cout << "Ввидите высоту равнобедренных сторон Треугольника!" << endl;
//        cin >> enter;
//        /*cout << "Ввидите ширину основания Треугольника!" << endl;
//        cin >> width;*/
//        height = 15;
//        switch (enter) {
//            case 1:
//                for (int i = 0; i < height / 2; i++) { // высота Треугольника
//
//                    for (int j = 1; j < height / 2 - i; j++) {
//                        cout << " ";
//                    }
//
//                    for (int j = i + i; j >= -1; j--) { // Рисовка Треугольника
//                        if (j == -1) {
//                            cout << "\\";
//                        }
//                        else if (j == i + i) {
//                            cout << "/";
//                        }
//                        else {
//                            if (i == height / 2 - 1) {
//                                cout << "_";
//                            }
//                            else {
//                                cout << " ";
//                            }
//                        }
//                    }
//
//                    cout << endl;
//                }
//
//        }
//
//        
//
// 
//        cout << "\n0 - Выход\n1 - Продолжить" << endl;
//        cin >> proceed;
//    } while (proceed);
//
//    return 0;
//}