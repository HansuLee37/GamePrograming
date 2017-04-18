#include <iostream>
#include <string>
using namespace std;
class Car{
public:
	int speed;
	int gear;
	string color;
	void setGear(int newGear){
		gear = newGear;
	}
	void setSpeed(int newSpeed){
		speed = newSpeed;
	}
	void speedUp(int increment){
		speed += increment;
		cout << "speed : " << speed << endl;
	}
	void speedDown(int decrement){
		speed -= decrement;
		cout << "speed : " << speed << endl;
	}
};

class SportsCar : public Car{
	bool turbo;
public:
	void setTurbo(bool newValue){
		turbo = newValue;
	}
};

int main(){
	SportsCar c;
	c.color = "Red";
	c.setGear(3);
	c.setSpeed(100);
	c.speedUp(100);
	c.speedDown(30);
	c.setTurbo(true);
	return 0;
}

//상속 : 기존에 존재하는 유사한 클래스로부터 속성과 동작을 이어받고 자신이 필요한 기능을 추가하는 기법
//상속의 장점
//상속을 통하여 기존 클래스의 멤버변수와 멤버 함수를 재사용
//기존 클래스의 일부 변경도 가능
//코드의 중복을 줄일 수 있다
