#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void pointer1();
void pointer2();
void pointer3();
void pointer4();

int main() {
	
	pointer1();
	pointer2();
	pointer3();
	pointer4();
	return 0;	
}

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
