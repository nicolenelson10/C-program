#include<stdio.h>
typedef struct{
float real;
float imag;
}complex;
complex add(complex n1,complex n2);
int main(){
complex n1,n2,result;
printf("for the first complex number:");
printf("enter the real and complex part of 1st no:");
scanf("%f%f",&n1.real,&n1.imag);
printf("enter the real and complex part oof 2nd no:");
scanf("%f%f",&n2.real,&n2.imag);
result=add(n1,n2);
printf("result =%f+%fi",result.real,result.imag);
return 0;
}
complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}

