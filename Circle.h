#include <iostream>  // ǥ�� �����
#include <vector>    // std::vector ���
#include "Shape.h"
using namespace std; // ���ӽ����̽� std ����


#ifndef CIRCLE_H
#define CIRCLE_H


class Circle : public Shape {
protected:
    void draw() override {
        cout << "Circle" << endl;
    }
};

#endif
