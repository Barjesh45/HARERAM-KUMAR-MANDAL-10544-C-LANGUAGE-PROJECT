/* write a c program to cheack the wether the number is armstrong or not*/

    #include <stdio.h>
    
    void arm_strong(int num){          //function to check armstrong number

    int sum=0,temp,d;
    temp=num;

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

    int main() {                       // main program
      int num;
      printf("enter the number");
      scanf("%d",&num);
    
      arm_strong(num);                 // function calling
    
      return 0;
    }
