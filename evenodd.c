#include<stdio.h>
int checkisEven(int num);
int main(){
int num;
printf("enter the number to be checked");
scanf("%d",&num);
if (checkisEven(num)
{
printf("even no");
}else{
printf("odd no");
}
return 0;
}
int checkisEven(int num){
if(num%2==0){
return 1;
}else{
return 0;
}
}
