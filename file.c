#include<stdio.h>

int main(){
 FILE* fp=fopen("C:/Users/DEREK/Desktop/demo.txt","r");
 if(fp!=NULL){
  char c;
  while((c=fgetc(fp))!=EOF){
   putchar(c);
  }
  fclose(fp);
 }
 return 0;
}
h a h a h  
 