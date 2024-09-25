//A Function that will allow a floating point number to be raised to an integer power.
//25.09.2024


#include<stdio.h>
#include<math.h>

double power(double x, int n) {
       return pow(x, n);
}
int main() {
    double x;
    int n;
    double result;
    
    printf("Enter a floating point number (x):");
    scanf("%lf",&x);
    
    printf("Enter an integer (n):");
    scanf("%d",&n);
    
    result=power(x, n);
    printf("Result of %d is: %.4lf\n",x,n,result);
    
    return 0;
}
