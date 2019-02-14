#include <iostream>
using namespace std;
class Laptops {
	int ram;
	public:
		void setRam(int r) {
			this->ram = r;
		}
		void showAddress() {
			cout<<"Memory address of current object = "<<this<<endl;
			cout<<"Value of this -> ram = "<<this->ram<<endl;
		}
		
};

int main() {
	Laptops l1;
	l1.setRam(100);
	l1.showAddress();
}
