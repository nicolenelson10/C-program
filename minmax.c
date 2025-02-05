#include<stdio.h>
 int main(){
  int num[10],limit,largest,smallest,i,a,b;
  printf("enter the limit:");
  scanf("%d",&limit);
  for(i=0;i<limit;i++){
  printf("enter the elements");
  scanf("%d",&num[i]);
  }
  largest=num[0];
  smallest=num[0];
  for(i=0;i<limit;i++){
    if(num[i]>largest){
     largest=num[i];
     a=i;
      }
    if(num[i]<smallest){
     smallest=num[i];
     b=i;
    }
  }
    printf("the largest number is %d and the postion is %d:", largest,a);
     printf("the smallest number is %d and the postion is %d:", smallest,b);
    
  return 0;
  }  
   
  
