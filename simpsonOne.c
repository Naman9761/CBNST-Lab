#include<stdio.h>
float fun(float x)
{
 float y = 1 / (1+ x*x);
 return y ;
}
float function(float x0,float xn, float h)
{ 
 float ret = fun(x0)+ fun(xn) ;
 int n = (xn-x0)/h; 
 for(int i = 1 ; i < 6 ; i++ )
 {
 if( i%2 != 0 )
 ret += 4*fun(x0+i*h);
 else
 ret += 2*fun(x0+i*h);
 } 
 ret *= h/3 ;
 return ret ;
}
int main()
{
 float x0, xn ,h;
 printf("Enter the range for intrigation : ");
 scanf("%f%f",&x0,&xn);
 printf("Enter the value of h: ");
 scanf("%f",&h);
 float ret = function(x0,xn,h);
 printf("the value of function is : %f\n",ret);
 return 0;