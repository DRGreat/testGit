#include<stdio.h>
#include<time.h>

void printN(int N){
	int i;
	for(i=1;i<=N;i++)
		printf("%d\n",i);
}

void printM(int M){
	if(M){
		printM(M-1);
		printf("%d\n",M);
	}
}

int main(){
	clock_t t1,t2,t3,t4;
	int N=100000;
	t1=clock();
	printN(N);
	t2=clock();
	t3=clock();
	printM(N);
	t4=clock();
	
	printf("%f\n",(float)(t2-t1)/1000);
	printf("%f\n",(float)(t4-t3)/1000);
	return 0;
} 
