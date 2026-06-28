
#include <stdio.h>
int main() {
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    int temp=num;
    int rev=0;
    int d;
    while(num>0){
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    printf("%d\n",rev);
    if(temp==rev){
        printf("The given number is a palindrome");
    }
    else{
        printf("The given number is not a palindrome");
    }
    return 0;
}