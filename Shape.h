#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>  // ǥ�� �����
#include <vector>    // std::vector ���
using namespace std; // ���ӽ����̽� std ����


class Shape {
protected:
    virtual void draw() = 0; // ���� ���� �Լ�
public:
    virtual ~Shape() {}
    void paint() { draw(); }
};

#endif
