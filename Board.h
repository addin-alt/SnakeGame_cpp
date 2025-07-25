#ifndef BOARD_H
#define BOARD_H

class Board {
public:
    Board(int w, int h);
    void draw(int snakeX, int snakeY);
    int getWidth();
    int getHeight();

private:
    int width, height;
};

#endif
