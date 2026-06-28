#include <stdio.h>
int main() {
    int num=1530;
    int sum=0;
    int d;
    int temp=num;
    while(num>0){
        d=num%10;
        d=d*d*d;
        sum=sum+d;
        num=num/10;
    }
    printf("%d\n",sum);
    if(temp==sum){
        printf("The given number armstrong number");
    }else{
        printf("The given number not a armstrong number");
    }
    return 0;
}