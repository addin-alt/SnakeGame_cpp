#include "Game.h"
#include <conio.h>
#include <windows.h>
#include <iostream>

Game::Game() {}

void Game::run() {
    Snake snake(10, 10);
    Board board(20, 20);

    while (true) {
        board.draw(snake.getX(), snake.getY());

        if (_kbhit()) {
            char ch = _getch();
            if (ch == 'w') snake.changeDirection('U');
            else if (ch == 's') snake.changeDirection('D');
            else if (ch == 'a') snake.changeDirection('L');
            else if (ch == 'd') snake.changeDirection('R');
        }

        snake.move();

        if (snake.hasCollided()) {
            std::cout << "Game Over!" << std::endl;
            break;
        }

        Sleep(100); // delay
    }
}
