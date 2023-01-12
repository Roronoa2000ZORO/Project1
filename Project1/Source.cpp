#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
    setlocale(LC_ALL, "Russian");
    // game loop
    
    
    
    while (1) {
        int sum = 0;
        int a0,a1,a2,a3,a4,a5,a6,a7,a8;
        int atack = 0;
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();
            if (mountainH == 9) {
                a0 = mountainH;
            }else if (mountainH == 8) {
                a1 = mountainH;
            }
            else if (mountainH == 7) {
                a2 = mountainH;
            }
            else if (mountainH == 6) {
                a3 = mountainH;
            }
            else if (mountainH == 5) {
                a4 = mountainH;
            }
            else if (mountainH == 4) {
                a5 = mountainH;
            }
            else if (mountainH == 3) {
                a6 = mountainH;
            }
            else if (mountainH == 2) {
                a7 = mountainH;
            } else if (mountainH == 1) {
                a8 = mountainH;
            }
            //sum += mountainH;
        }
        
        if (a0 == 9) {
            atack += a0;
        }
        else if (a1 == 8) {
            atack += a1;
        }
        else if (a2 == 7) {
            atack += a2;
        }
        else if (a3 == 6) {
            atack += a3;
        }
        else if (a4 == 5) {
            atack += a4;
        }
        else if (a5 == 4) {
            atack += a5;
        }
        else if (a6 == 3) {
            atack += a6;
        }
        else if (a7 == 2) {
            atack += a7;
        }
        else if (a8 == 1) {
            atack += a8;
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << atack << endl; // The index of the mountain to fire on.
    }
    return 0;
} 