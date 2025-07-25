#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
using namespace std;

class Snake {
public:
    Snake(int startX, int startY);
    void move();
    void changeDirection(char dir);
    void grow();
    int getX();
    int getY();
    vector<pair<int, int>> getBody();
    bool hasCollided();

private:
    vector<pair<int, int>> body;
    char direction;
};

#endif
