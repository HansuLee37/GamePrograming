#include <iostream>
using namespace std;
int main(){
	char *p[4] = { "January", "Feburary", "March", "April" };
	for (int i = 0; i < 4; i++)
		cout << i + 1 << "월은 : " << p[i] << "입니다" << endl;

	return 0;
}