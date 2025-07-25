#include "Snake.h"

Snake::Snake(int startX, int startY) {
    body.push_back({startX, startY});
    direction = 'R'; // Right
}

void Snake::move() {
    int x = body[0].first;
    int y = body[0].second;

    if (direction == 'U') y--;
    else if (direction == 'D') y++;
    else if (direction == 'L') x--;
    else if (direction == 'R') x++;

    body.insert(body.begin(), {x, y});
    body.pop_back();
}

void Snake::changeDirection(char dir) {
    direction = dir;
}

void Snake::grow() {
    body.push_back(body.back());
}

int Snake::getX() { return body[0].first; }
int Snake::getY() { return body[0].second; }

vector<pair<int, int>> Snake::getBody() {
    return body;
}

bool Snake::hasCollided() {
    for (int i = 1; i < body.size(); i++) {
        if (body[i] == body[0])
            return true;
    }
    return false;
}
