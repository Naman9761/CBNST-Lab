#include<stdio.h>
int main()
{
 int n ;
 printf("Enter the size of value : ");
 scanf("%d",&n);
 float matrix[n+1][4];
 printf("Enter the value of x and y : ");
 for(int i = 0 ; i< n ; i++)
 {
 scanf("%f%f",&matrix[i][0],&matrix[i][1]);// VALUE OF X AND Y 
 matrix[i][2] = matrix[i][0]*matrix[i][1]; // VALUE OF XY 
 matrix[i][3] = matrix[i][0]*matrix[i][0]; // VALUE OF X^2
 }
 for(int i = 0 ;i < 4 ; i++ )
 matrix[n][i] = 0;
 for(int i = 0 ; i < n ;i++)
 for(int j = 0 ; j< 4 ; j++)
 matrix[n][j] += matrix[i][j];
 float a = (matrix[n][3]* matrix[n][1] - matrix[n][2]* matrix[n][0])/(n*matrix[n][3]-matrix[n][0]*matrix[n][0]);
 float b = (n*matrix[n][2] - matrix[n][1]* matrix[n][0])/(n*matrix[n][3]-matrix[n][0]*matrix[n][0]); 
 printf("The function is y = %f + %fx\n",a,b);
 return 0;
}
