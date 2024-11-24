#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>  // 표준 입출력
#include <vector>    // std::vector 사용
using namespace std; // 네임스페이스 std 선언


class Shape {
protected:
    virtual void draw() = 0; // 순수 가상 함수
public:
    virtual ~Shape() {}
    void paint() { draw(); }
};

#endif
