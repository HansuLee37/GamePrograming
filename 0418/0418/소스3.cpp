#include <iostream>
#include <string>
using namespace std;
class Shape{
	int x, y;
public:
	Shape(){
		cout << "Shape 생성자()" << endl;
	}
	~Shape(){
		cout << "Shape 소멸자()" << endl;
	}
};
class Rectangle : public Shape{
	int width, height;
public:
	Rectangle(){
		cout << "Rectangle 생성자()" << endl;
	}
	~Rectangle(){
		cout << "Rectangle 소멸자()" << endl;
	}
};

int main(){
	Rectangle r;
	return 0;
}
//상속에서의 생성자와 소멸자
//생성시 부모클래스 -> 자식클래스 (자식에서 먼저 접근해서 최상의 부모까지 호출 한 후 생성자를 실행시킨다)
//소멸시 자식클래스 -> 부모클래스