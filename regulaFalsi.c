#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) (x*exp(x)-cos(x))

int main(){
    float x0,x1,x2;
    int i=0;

    do{
        printf("Enter the range ");
        scanf("%f%f",&x0,&x1);
    }while(f(x0)*f(x1)>0);

    do{
        i++;
        x2=x0-((f(x0)/ (f(x1)-f(x0)))*(x1-x0));
        if(f(x2)<0)
            x0=x2;
        else if(f(x2)>0)
            x1=x2;
            
        printf("\n");
        printf("\n For iteration:%d",i);
        printf("\nRoots are:%f",x2);
        printf("\nValue at root is:%f",f(x2));
    }while(fabs(f(x2))>=0.0001);
    printf("\n");
    printf("\nRoot = %f and number of iteration = %d", x2,i);
    return 0;
}