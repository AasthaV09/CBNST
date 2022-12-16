#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float func(float x){
    return 1/(1+(x*x));
}

int main(){
    float a, b, n,sum1=0,sum2=0,ans,x;
    printf("Enter the upper limit: ");
    scanf("%f",&b);
    printf("Enter the lower limit: ");
    scanf("%f",&a);
    printf("Enter the number of sub-intervals: ");
    scanf("%f",&n);
    float h=fabs(b-a)/n;
    for(int i=1;i<n;i++){
      x=a+i*h;
      if(i%2==0)
        sum1=sum1+func(x);
      else
        sum2=sum2+func(x);
    }
    ans=(h/3)*(func(a)+func(b)+2*sum1+4*sum2);
    printf("\nAnswer: %f",ans);
    return 0;
}
