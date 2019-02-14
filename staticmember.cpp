#include <iostream>
#include <string.h>
using namespace std;
class SalesPerson {
	long code;
	char name[50];
	float sales;
	static float totalSales;
	public:
	SalesPerson(long code, char name[], float sales) {
		this->code=code;strcpy(this->name,name); this->sales=sales;
		totalSales+=sales;
	}
	SalesPerson(){
	}
	static void showTotalSales() {
		cout<<endl<<"Total sales = "<<totalSales<<endl;
	}
	
	
};

float SalesPerson::totalSales=0;

int main() {
	SalesPerson s1(101,"test1",1000);
	SalesPerson s2(102,"test2",2000);
	SalesPerson s3(103,"test3",5000);
	SalesPerson::showTotalSales();
	s3.showTotalSales();
}
