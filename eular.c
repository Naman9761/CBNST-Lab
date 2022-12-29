#include<stdio.h>
float diff_fun(float x, float y)
{ float ret = x +y ;
 return ret ;
}
int main()
{ float x0,y0 ,xn,yn,h ;
 int n ;
 printf("Enter the initial value of x and y : ");
 scanf("%f%f",&x0,&y0);
 printf("Enter the value of n : ");
 scanf("%d",&n);
 printf("Enter the value of x to find value : ");
 scanf("%f",&xn);
 h =(xn - x0)/n ;
 printf("the value of h is %f\n",h);
 float y[n+1]; y[0] = y0 ;
 for(int i = 1 ; i <= n ; i++ )
 y[i] = y[i-1] + h*diff_fun(x0+(i-1)*h , y[i-1]);
 for(int i = 0 ; i<= n ; i++)
 printf("y[%f] = %f \n", x0+i*h , y[i]);
 return 0; 
}
