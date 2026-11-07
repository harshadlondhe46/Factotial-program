#include<stdio.h> 
int main()
{ 
 int n, i ;
 int fact = 1;
 printf("\n---------------------\n");
 printf("Enter number: ");
 scanf("%d", &n);

 for (i=1 ; i<=n ; i++)
 {
     fact = fact * i;
 }
 printf(" factorial number is = %d", fact);
 printf("\n-------------------------\n"); 
 return 0;
}
