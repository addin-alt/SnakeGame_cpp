#include "Board.h"
#include <iostream>
using namespace std;

Board::Board(int w, int h) {
    width = w;
    height = h;
}

void Board::draw(int snakeX, int snakeY) {
    system("cls"); // or "clear" on Unix/Linux

    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) cout << "#";

            if (j == snakeX && i == snakeY)
                cout << "O";
            else
                cout << " ";

            if (j == width - 1) cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;
}

int Board::getWidth() { return width; }
int Board::getHeight() { return height; }
