#include <iostream>
#include <string>
using namespace std;
class Shape{
	int x, y;
public:
	Shape(){
		cout << "Shape ������()" << endl;
	}
	~Shape(){
		cout << "Shape �Ҹ���()" << endl;
	}
};
class Rectangle : public Shape{
	int width, height;
public:
	Rectangle(){
		cout << "Rectangle ������()" << endl;
	}
	~Rectangle(){
		cout << "Rectangle �Ҹ���()" << endl;
	}
};

int main(){
	Rectangle r;
	return 0;
}
//��ӿ����� �����ڿ� �Ҹ���
//������ �θ�Ŭ���� -> �ڽ�Ŭ���� (�ڽĿ��� ���� �����ؼ� �ֻ��� �θ���� ȣ�� �� �� �����ڸ� �����Ų��)
//�Ҹ�� �ڽ�Ŭ���� -> �θ�Ŭ����