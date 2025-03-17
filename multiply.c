#include<stdio.h>
int checkmultiply(int num1,int num2);
int main(){
int num1,num2,result;
printf("\nEnter the numbers");
scanf("%d%d",&num1,&num2);
result=checkmultiply(num1,num2);
printf("the product is :%d",result);
return 0;
}
int checkmultiply(int num1,int num2){
return num1*num2;
}


