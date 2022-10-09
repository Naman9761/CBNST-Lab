#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.0001
#define f(x) x*exp(x) -cos(x)
void main(){
    float x0,x1,x2,f0,f1,f2;
    int i=0;
    printf("Enter the value of x0 and x1:");
    scanf("%f%f",&x0,&x1);

    do{
        f0=f(x0);
        f1=f(x1);
        x2=(x0+x1)/2;
        f2=f(x2);
        if(f0*f2<0){
            x1=x2;
        }
        else{
            x0=x2;
        }
        i++;
        printf("\n");
        printf("\n For iteration:%d",i);
        printf("\nRoots are:%f",x2);
        printf("\nValue at root is:%f",f2);
    }while(fabs(f2)>e);
    printf("\nRoot value of given Equation is:%f",x2);
    return 0;

}