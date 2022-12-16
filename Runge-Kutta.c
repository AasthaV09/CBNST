#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double func(double x, double y){
    return (x-y)/(y+x);
}
int main(){
    double x0,y0, y,x,h,k1,k2,k3,k4;
    printf("Enter initial value of x: ");
    scanf("%lf",&x0);
    printf("ENter initial value of y: ");
    scanf("%lf",&y0);
    printf("Enter the value of x for which y is required: ");
    scanf("%lf",&x);
    printf("Enter the step-width, h: ");
    scanf("%lf",&h);
    printf("x\t\ty\t\tk1\t\tk2\t\tk3\t\tk4\t\tk_avg\n");
    while((x-x0)>0.0000000001){
        k1=h*func(x0,y0);
        k2=h*func(x0+h/2.0,y0+k1/2.0);
        k3=h*func(x0+h/2.0,y0+k2/2.0);
        k4=h*func(x0+h,y0+k3);
        printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",x0,y0,k1,k2,k3,k4,(k1+2.0*(k2+k3)+k4)/6.0);
        y=y0+(k1+2.0*(k2+k3)+k4)/6.0;
        y0=y;
        x0=x0+h;
    }
    printf("%lf\t%lf\n",x0,y0);
    printf("The value of y is %lf\n",y);
    return 0;
}
