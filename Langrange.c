#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n,i,j;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    float x[n],y[n],x0;
    printf("Enter the values of x and y respectively:\n");
    for(i=0;i<n;i++){
        scanf("%f %f",&x[i],&y[i]);
    }
    printf("Enter the values of x for which y is required: ");
    scanf("%f",&x0);
    float num,deno,ans;
    for(i=0;i<n;i++){
        num=1.0000f;
        deno=1.0000f;
        for(j=0;j<n;j++){
            if(i==j) continue;
            deno*=(x[i]-x[j]);
            num*=(x0-x[j]);
        }
        ans+=((num/deno)*y[i]);
    }
    printf("ans: %f",ans);
    return 0;
}
