#include <iostream>
using namespace std;
class Professional {
	long int ssn;
	int age;
	float income;
	public:
		void readData() {
			cout<<endl<<"Enter ssn, age, and income"<<endl;
			cin>>ssn>>age>>income;
		}
		void showData() {
			cout<<endl<<"ssn: "<<ssn
			<<endl<<"age: "<<age
			<<endl<<"income: "<<income;
		}
};

class Doctor: public Professional {
	char specialization[50], hospital[50];

	public:
		void readData() {
			Professional::readData();
			cin.ignore(); //this flushes the newline character out of the buffer in between.
			cout<<"Enter specialization: ";
			cin.getline(specialization,50);
			cout<<"Enter hospital: ";
			cin.getline(hospital,50);
		}
		void showData() {
			Professional::showData();
			cout<<endl<<"Specialization: "<<specialization
			<<endl<<"Hospital: "<<hospital;
		}
};

int main() {
	Doctor d;
	d.readData();
	d.showData();
	return 0;
}
