#include<stdio.h>
float function(float x ,float y)
{
 return (y-x)/(y+x) ;
}
float rkmethod(float x ,float y,float h )
{
 float k1 = h*function(x , y);
 float k2 = h*function(x + h/2 , y + k1/2);
 float k3 = h*function(x + h/2 , y + k2/2);
 float k4 = h*function(x +h , y + k3);
 float ret = y + (k1 + 2* k2 + 2* k3 + k4)/6;
 return ret ;
}
int main()
{
 float x0, y0 , xn ;
 printf("Enter the initial value of x and y : ");
 scanf("%f%f",&x0,&y0);
 float h ;
 printf("Enter the value of h : ");
 scanf("%f",&h);
 printf("Enter the value of x to find y : ");
 scanf("%f",&xn);
 int n = (xn-x0)/h ;
 float y[n+1];
 y[0] = y0;
 for(int i = 1 ; i<= n ;i++)
 y[i] = rkmethod(x0 + (i-1)*h, y[i-1], h );
 for(int i = 0 ; i<= n ; i++)
 printf("y[%f] = %f\n", x0+(i)*h , y[i]);
 return 0 ;
}