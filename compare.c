/*Name:Nicole Nelson
c program to compare*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[30], str2[30];
   printf("Enter first string: ");
   scanf("%s",str1);
   printf("Enter second string: ");
   scanf("%s",str2);
   if (strcmp(str1, str2) == 0) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }

    return 0;
}

