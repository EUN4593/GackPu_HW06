#include <iostream>  // ǥ�� �����
#include <vector>    // std::vector ���
#include "Shape.h"
using namespace std; // ���ӽ����̽� std ����

#ifndef LINE_H
#define LINE_H



class Line : public Shape {
protected:
    void draw() override {
        cout << "Line" << endl;
    }
};

#endif
