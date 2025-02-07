
//name=Nicole Nelson
//a C program

#include<stdio.h>
int main(){
 int row,col;
 printf("\nenter the no of rows and columns");
 scanf("%d%d",&row,&col);
 int m1[row][col],m2[row][col],m3[row][col];
 printf("enter the first matrix elements");
 for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
     scanf("%d",&m1[i][j]);
    }
  }
  printf("enter the second matrix elements");
   for (int i=0;i<row;i++){
     for (int j=0;j<col;j++){
     scanf("%d",&m2[i][j]);
     }
  }
     for (int i=0;i<row;i++){
       for (int j=0;j<col;j++){
        m3[i][j]=m1[i][j]+m2[i][j];
        }
     }
  printf("\nthe sum of  elements");
    for (int i=0;i<row;i++){
       for (int j=0;j<col;j++){
          printf("%d\t",m3[i][j]);
     }
     printf("\n");
    }
return 0;
}
  
