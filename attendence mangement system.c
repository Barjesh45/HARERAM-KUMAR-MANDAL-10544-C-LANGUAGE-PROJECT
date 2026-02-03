/*The aim of this project is to develop a Student Attendance Management System that records, displays,and counts the attendance of students using a simple array-based approach.*/
#include<stdio.h>

int main(){
    int n,present=0,absent=0;
    printf("Enter the total number of student: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter 1 for present and other digit for absent.\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            printf("Roll Number %d = Present\n",i+1);
            present++;
        }else{
            printf("Roll Number %d = Absent\n",i+1);
            absent++;
        }
    }
    printf("---------------------------\n");
    printf("Total students = %d\n",n);
    printf("Present students = %d\n",present);
    printf("Absent student = %d\n",absent);
    
    return 0;
}