#include <iostream>  // 표준 입출력
#include <vector>    // std::vector 사용
#include "Shape.h"
using namespace std; // 네임스페이스 std 선언

#ifndef LINE_H
#define LINE_H



class Line : public Shape {
protected:
    void draw() override {
        cout << "Line" << endl;
    }
};

#endif
