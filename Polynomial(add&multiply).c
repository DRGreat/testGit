 #include<stdio.h>
 #include<stdlib.h>
 
 typedef struct polynode{
  int coef;
  int expon;
 }pNode;
 
 typedef struct polynomial{
  pNode *poly;
  int size;
 }Polynomial;
 
Polynomial* readPoly(){
 int N,e,c;
 Polynomial *p;
 scanf("%d",&N);
 printf("%d\n",N); 
 p=(Polynomial*)malloc(sizeof(Polynomial));
 p->size=N;
 p->poly=(pNode*)malloc(N*sizeof(pNode));
 while(N--){
  scanf("%d %d",&c,&e);
  printf("%d %d\n",c,e);
  p->poly[N].coef=c;
  p->poly[N].expon=e;
 }
 return p;
}
  
 int main(){
  Polynomial *p1;
  p1=readPoly();
  return 0;
 }
