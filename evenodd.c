#include<stdio.h>
void checkisEven(int num);
int main(){
int num;
printf("enter the number to be checked");
scanf("%d",&num);
checkisEven(num);
return 0;
void checkisEven(int num){
if(num%2==0){
printf(1);
}else{
printf(0)
}
}
