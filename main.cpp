#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

namespace exampleNS {
	int i = 0;
	int j = 1;
	void printValue(){
		cout << endl << "i = " << i;
		cout << endl << "j = " << j;
	}
};

void pointer1();
void pointer2();
void pointer3();
void pointer4();
void class1();
void pntobj();

int main() {
	pointer1();
	pointer2();
	pointer3();
	pointer4();
	class1();
	pntobj();
	exampleNS::printValue();
	return 0;	

}

/* Pointer */ 
void pointer1() {
	printf("1. Pointer and Pointer to Pointer\n\n");
	int a = 100, *pt, **ppt;
	pt = &a;
	ppt = &pt;
	printf("\nAddress of pt = %u",pt);
	printf("\nValue of pt (*pt) = %u",*pt);
	printf("\nAddress of ppt = %u",ppt);
	printf("\nValue of ppt (*ppt) = %u",*ppt);
	printf("\nValue of **ppt = %u",**ppt);
	printf("\n\n");
}

void pointer2() {
	printf("2. Pointer Arithmetic\n\n");
	float a = 100.00;
	float *pt;
	pt=&a;
	printf("Address = %u\t value = %5.2f\n", pt, *pt);
	++pt;
	printf("Address = %u\t value = %5.2f\n", pt, *pt);
	--pt;
	printf("Address = %u\t value = %5.2f\n", pt, *pt);
	printf("\n\n");
}

void pointer3() {
	printf("3. Subtracting two pointers\n\n");
	int arr[]={100,200,90,800,1000};
	int n=&arr[4]-&arr[2];
	printf("n = %d\n",n);
	double amount[]={100.0,200.15,9000.99,1000.11,2500.55} ;
	n=&amount[4]-&amount[0];  
	printf("n = %d\n",n);
	printf("\n\n");
}

void pointer4() {
	printf("4. Using malloc and realloc\n\n");
	int *values;    
   	values = (int *)malloc(sizeof(int)*3);
	int c;
	
	for (c=0;c<3;++c) {
		printf("values[%d] = ",c);
		scanf("%d",&values[c]);
	}
	
	values = (int *)realloc(values, sizeof(int)*5);
	printf("\n_______________________________________\n\n");
	for (c=3;c<5;++c) {
		printf("values[%d] = ",c);
		scanf("%d",&values[c]);
	}
	printf("\n_______________________________________\n");
	for(c = 0; c < 5;c++) {
		printf("%d\t", *(values + c));
	}
	printf("\n\n");
}

/* Classes and Objects */ 
class employee {
	long ecode;
	int bsal;
	float hra, pf;
	public:
	void assign(long ecode1, int bsal1, float hra1, float pf1) {
		ecode = ecode1;
		bsal = bsal1;
		hra = hra1;
		pf = pf1;
	};
	float calc_netSalary() {
		float nsal = bsal+hra-pf;
		return nsal;
	};
};

void class1() {
	employee emp1, emp2, emp3;
	emp1.assign(101,10000,1000,900);
	emp2.assign(102,20000,2000,1000);
	emp3.assign(103,30000,9000,8000);
	cout<<endl<<"Emp1: "<<emp1.calc_netSalary()
	<<endl<<"Emp2: "<<emp2.calc_netSalary()
	<<endl<<"Emp3: "<<emp3.calc_netSalary();
}

/* Pointer to Object */
class products {
	int pcode;
	float price;
	int usold;
	public:
	void assign() {
		pcode = 909;
		price = 100.99;
		usold = 100;
	};
	void show() {
		cout<<endl<<"Product code = "<<pcode
		<<endl<<"Price = "<<price
		<<endl<<"Units = "<<usold;
	};
};

void pntobj() {
	products pobj;
	products *pnt;
	pnt=&pobj;
	pnt->assign();
	pnt->show();
}


