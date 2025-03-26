#include<stdio.h>
#define pi 3.141159
int main(){
  int radius1,area,area1;
  printf("enter the radius of circle");
  scanf("%d",&radius1);
  area=pi*radius1*radius1;
  printf("area of circle is:%d\n",area);
  int height,radius2;
  printf("enter the radius of cylinder:");
  scanf("%d",&radius2);
  printf("enter the height:");
  scanf("%d",&height);
  area1=2*pi*radius2*height+2*pi*radius2*radius2;
  printf("the area of cylinder is:%d",area1);
  return 0;
  }
