#include <iostream>  // 표준 입출력
#include <vector>    // std::vector 사용
#include "Shape.h"
using namespace std; // 네임스페이스 std 선언


#ifndef CIRCLE_H
#define CIRCLE_H


class Circle : public Shape {
protected:
    void draw() override {
        cout << "Circle" << endl;
    }
};

#endif
