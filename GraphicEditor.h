#include <iostream>  // ǥ�� �����
#include <vector>    // std::vector ���
using namespace std; // ���ӽ����̽� std ����


#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include <vector>
#include "Circle.h"
#include "Rect.h"
#include "Line.h"

class GraphicEditor {
private:
    vector<Shape*> shapes;

public:
    ~GraphicEditor() {
        for (Shape* shape : shapes) {
            delete shape;
        }
    }

    void insertShape(int type) {
        Shape* shape = nullptr;
        switch (type) {
        case 1: shape = new Line(); break;
        case 2: shape = new Circle(); break;
        case 3: shape = new Rect(); break;
        default:
            cout << "�߸��� �Է��Դϴ�." << endl;
            return;
        }
        shapes.push_back(shape);
        cout << "������ �߰��Ǿ����ϴ�." << endl;
    }

    void deleteShape(int index) {
        if (index < 0 || index >= shapes.size()) {
            cout << "������ �� ���� �ε����Դϴ�." << endl;
            return;
        }
        delete shapes[index];
        shapes.erase(shapes.begin() + index);
        cout << "������ �����Ǿ����ϴ�." << endl;
    }

    void showAllShapes() const {
        cout << "��� ������ ����մϴ�." << endl;
        for (int i = 0; i < shapes.size(); ++i) {
            cout << i << ": ";
            shapes[i]->paint();
        }
    }

    void run() {
        cout << "�׷��� �������Դϴ�." << endl;
        while (true) {
            cout << "����:1, ����:2, ��� ����:3, ����:4 >> ";
            int command;
            cin >> command;
            switch (command) {
            case 1: {
                cout << "��:1, ��:2, �簢��:3 >> ";
                int type;
                cin >> type;
                insertShape(type);
                break;
            }
            case 2: {
                cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
                int index;
                cin >> index;
                deleteShape(index);
                break;
            }
            case 3:
                showAllShapes();
                break;
            case 4:
                cout << "���α׷��� �����մϴ�." << endl;
                return;
            default:
                cout << "�߸��� ����Դϴ�." << endl;
            }
        }
    }
};

#endif
