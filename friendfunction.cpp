#include <iostream>
using namespace std;

class mobile {
	int ram;
	float speed;
public:
	friend void message();
	mobile(int ram, float speed) {
		this -> ram = ram; this -> speed = speed;
	}
};

void message() {
	mobile m1(16,8);
	cout<<"Ram = "<<m1.ram
	<<endl<<"Speed = "<<m1.speed;
}

int main() {
	message();
}
