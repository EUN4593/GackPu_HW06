#ifndef RECT_H
#define RECT_H
#include <iostream>  // ǥ�� �����
#include <vector>    // std::vector ���
#include "Shape.h"
using namespace std; // ���ӽ����̽� std ����


class Rect : public Shape {
protected:
    void draw() override {
        cout << "Rectangle" << endl;
    }
};

#endif
