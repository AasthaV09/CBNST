#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double func(double x, double y){
    return (x-y)/(y+x);
}
int main(){
    double x0,y0, y,x,h;
    printf("Enter initial value of x: ");
    scanf("%lf",&x0);
    printf("ENter initial value of y: ");
    scanf("%lf",&y0);
    printf("Enter the value of x for which y is required: ");
    scanf("%lf",&x);
    printf("Enter the step-width, h: ");
    scanf("%lf",&h);
    printf("x\ty\ty'\thy'\ty+hy'\n");
    while(x0<x){
        y=y0+h*func(x0,y0);
        printf("%lf\t%lf\t%lf\t%lf\t%lf\n",x0,y0,func(x0,y0),h*func(x0,y0),y);
        y0=y;
        x0=x0+h;
    }
    printf("%lf\t%lf\n",x0,y0);
    printf("The value of y is %lf\n",y);
    return 0;
}
