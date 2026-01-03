#include <stdio.h>

//function definination
int digirootcal(int n);
//function calling
int digirootcal(int n){
    int sum;
    for(;n>=10;n=sum){
        sum=0;
        for(;n>0;n=n/10){
            int d=n%10;
            sum+=d;
        }
    }
    return n;
}
//main program which execute the code
int main (){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("total root sum =%d",digirootcal(n));
    return 0;
}
