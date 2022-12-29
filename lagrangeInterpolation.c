#include <stdio.h> 
int main() 
{ 
float xp, yp = 0, p; 
int i, j, n; 
printf("Enter number of arguments: "); 
scanf("%d", &n); 
float x[n]; 
printf("Enter values of x: "); 
for(int i=0;i<n;i++) 
scanf("%f",&x[i]); 
float y[n]; 
printf("Enter values of y: "); 
for(int i=0;i<n;i++) 
scanf("%f",&y[i]); 
printf("Enter interpolation point: "); 
scanf("%f", &xp); 
for (i = 1; i <= n; i++) 
{ 
p = 1; 
for (j = 1; j <= n; j++) 
if (i != j) 
p = p * (xp - x[j]) / (x[i] - x[j]); 
yp = yp + p * y[i]; 
} 
printf("Interpolated value at %.3f is %.3f.", xp,yp); 
return 0; 
}