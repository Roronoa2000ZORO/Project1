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
//        cout << "������� ������ �������������� ������ ������������!" << endl;
//        cin >> enter;
//        /*cout << "������� ������ ��������� ������������!" << endl;
//        cin >> width;*/
//        height = 15;
//        switch (enter) {
//            case 1:
//                for (int i = 0; i < height / 2; i++) { // ������ ������������
//
//                    for (int j = 1; j < height / 2 - i; j++) {
//                        cout << " ";
//                    }
//
//                    for (int j = i + i; j >= -1; j--) { // ������� ������������
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
//        cout << "\n0 - �����\n1 - ����������" << endl;
//        cin >> proceed;
//    } while (proceed);
//
//    return 0;
//}