#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float func(float x){
    return 1/(1+(x*x));
}

int main(){
    float a, b, n,sum=0,ans,x;
    printf("Enter the upper limit: ");
    scanf("%f",&b);
    printf("Enter the lower limit: ");
    scanf("%f",&a);
    printf("Enter the number of sub-intervals: ");
    scanf("%f",&n);
    float h=fabs(b-a)/n;
    for(int i=1;i<n;i++){
      x=a+i*h;
      sum=sum+func(x);
    }
    ans=(h/2)*(func(a)+func(b)+2*sum);
    printf("\nAnswer: %f",ans);
    return 0;
}
