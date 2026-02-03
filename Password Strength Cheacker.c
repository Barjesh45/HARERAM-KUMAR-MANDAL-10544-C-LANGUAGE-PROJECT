// The aim of this project is to create a BASIC PASSWORD STRENGTH CHEACKER that validates a users password 
// by cheacking for minimum length of at least one digit,and at least one uppercase latter.
#include<stdio.h>
#include<string.h>

int validatePassword(char password[]);
int validatePassword(char password[]){
    int digit = 0, upperCase = 0;
    if (strlen(password)<8){
        return 0;
    }
    for(int i=0;password[i] != '\0';i++){
        if (password[i]>='0' && password[i]<='9'){
            digit = 1;
        }
        if (password[i]>='A' && password[i]<='Z'){
            upperCase = 1;
        }
    }
    if(digit && upperCase){
       return 1;
    }else{
        return 0;
    }
}


int main (){
    char password[50];
    int result;

    printf("Enter password: ");
    scanf("%s",password);

    result = validatePassword(password);

    if(result==1){
        printf("Password is valid\n");
    }else{
        printf("Password is invalid\n");
    }
    return 0;
}