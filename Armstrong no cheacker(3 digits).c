
#include <stdio.h>

// making function to check armstrong 

void arm_strong(int num){
    int sum=0,temp,d;
    temp=num;
    //  sitution to create armstrog of the given number
    for(;temp!=0;temp=temp/10){
        d=temp%10;
        sum=sum+(d*d*d);
    }
    if(sum==num){
        printf("the given number is an armstrong number");
    }else{
        printf("not an armstrong");
    }
}

//  main program execution

int main() {
    int num;
    printf("enter the number");
    scanf("%d",&num);
    
    arm_strong(num);
    
    return 0;
}