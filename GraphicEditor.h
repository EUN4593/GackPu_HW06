#include <iostream>  // 표준 입출력
#include <vector>    // std::vector 사용
using namespace std; // 네임스페이스 std 선언


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
            cout << "잘못된 입력입니다." << endl;
            return;
        }
        shapes.push_back(shape);
        cout << "도형이 추가되었습니다." << endl;
    }

    void deleteShape(int index) {
        if (index < 0 || index >= shapes.size()) {
            cout << "삭제할 수 없는 인덱스입니다." << endl;
            return;
        }
        delete shapes[index];
        shapes.erase(shapes.begin() + index);
        cout << "도형이 삭제되었습니다." << endl;
    }

    void showAllShapes() const {
        cout << "모든 도형을 출력합니다." << endl;
        for (int i = 0; i < shapes.size(); ++i) {
            cout << i << ": ";
            shapes[i]->paint();
        }
    }

    void run() {
        cout << "그래픽 에디터입니다." << endl;
        while (true) {
            cout << "삽입:1, 삭제:2, 모두 보기:3, 종료:4 >> ";
            int command;
            cin >> command;
            switch (command) {
            case 1: {
                cout << "선:1, 원:2, 사각형:3 >> ";
                int type;
                cin >> type;
                insertShape(type);
                break;
            }
            case 2: {
                cout << "삭제하고자 하는 도형의 인덱스 >> ";
                int index;
                cin >> index;
                deleteShape(index);
                break;
            }
            case 3:
                showAllShapes();
                break;
            case 4:
                cout << "프로그램을 종료합니다." << endl;
                return;
            default:
                cout << "잘못된 명령입니다." << endl;
            }
        }
    }
};

#endif
