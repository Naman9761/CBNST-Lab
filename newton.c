#include<stdio.h>
#include<math.h>
#include<conio.h>
#define e 0.0001
#define f(x) x*sin(x)+cos(x)
#define df(x) x*cos(x)

int main(){
    float x0,x1,f0,f1,df0;
    int i=0;
    printf("Enter value of x0:");
    scanf("%f",&x0);
    do{
        f0=f(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        f1=f(x1);
        x0=x1;
        i++;
        printf("\n");
        printf("\nNumber of iterations:%d",i);
        printf("\n Roots:%f",x1);
        printf("\n value of root:%f",f1);
    }while(fabs(f1)>e);
    return 0;
}