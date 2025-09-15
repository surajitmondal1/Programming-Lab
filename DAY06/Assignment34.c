#include <stdio.h>
int main(){

int num1 = 0;
int num2 = 1;
int next_term;
int n,i; 
printf("Enter the number: ");
scanf("%d",&n);
printf("%d, %d", num1, num2);

for ( i = 2; i < n; i++) { 
    next_term = num1 + num2;
    printf(", %d", next_term);
    num1 = num2;       
    num2 = next_term; 
}
return 0;
}
