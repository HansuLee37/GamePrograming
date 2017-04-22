#include <iostream>
using namespace std;
class SoSimple{
	int num;
public :
	SoSimple(int n) : num(n){
		cout << "num = " << num << ", ";
		cout << "address = " << this << endl;
	}
	void ShowSimpleData(){
		cout << num << endl;
	}
	SoSimple *GetThisPointer(){
		return this;
	}
};

int main(){
	SoSimple sim1(100);
	SoSimple *ptr1 = sim1.GetThisPointer();
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple *ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();
	return 0;
}
//this 포인터
//포인터, 객체 자신 포인터
//클래스의 멤버 함수 내에서만 사용
//개발자가 선언하는 변수가 아니고, 컴파일러가 선언한 변수
//멤버 함수에 컴파일러에 의해 묵시적으로 삽입, 선언되는 변수
//static 멤버 변수에는 사용 불가능