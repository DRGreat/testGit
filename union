#include<stdio.h>
#include<stdlib.h>

typedef union{
	int a[2];
	double b;	
}testDataType;

int main()
{
	testDataType d;
	printf("sizeof(int):%d,sizeof(float):%d,sizeof(d):%d\n",sizeof(int),sizeof(double),sizeof(d));
	printf("address of a[0]:%d;address of a[1]:%d\n",&(d.a[0]),&(d.a[1]));
	d.a[0]=0x12345678;
	d.a[1]=0x789abcde;
	printf("d.a[0]=%08x; d.a[1]=%08x; d.b=%f\n",d.a[0],d.a[1],d.b);
	d.a[0]=0x00000000;
	printf("ÐÞ¸Äa[0]ºó:\nd.a[0]=%08x; d.a[1]=%08x; d.b=%f",d.a[0],d.a[1],d.b);
	return 0;	
} 

