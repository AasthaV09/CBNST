#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n,i,j;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    double a[n][n+1],x0;
    printf("Enter the values of x and y respectively:\n");
    for(i=0;i<n;i++){
        scanf("%lf%lf",&a[i][0],&a[i][1]);
    }
    printf("Enter the values of x for which y is required: ");
    scanf("%lf",&x0);
    for(j=2;j<=n;j++){
        for(i=0;i<n+2-j;i++){
           a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n+1-i;j++){
            printf("%lf  ",a[i][j]);
        }
        printf("\n");
    }
    float ans=a[0][1];
    float fact=1.00000f;
    float u=(x0-a[0][0])/(a[1][0]-a[0][0]);
    float ch=u;
    for(i=2;i<n+1;i++){
        ans+=(ch/fact)*(a[0][i]);
        fact*=i;
        ch*=(u-(float)(i-1));
    }
    printf("ans: %lf",ans);
    return 0;
}
