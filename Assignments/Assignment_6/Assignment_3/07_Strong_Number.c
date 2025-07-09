#include<stdio.h>

int calFactorial(int n){
    int fac = 1;
    int i=1;
    while(i<=n){
        fac = fac * i;
        i++;
    }

    return fac;
}

int checkStrongNumber(int n){
    int temp = n;
    int strong = 0;

    while(temp){
        int ld = temp % 10;
        strong = strong + calFactorial(ld);
        temp = temp /10;
    }

    return strong == n;
}

int main(){
    int n;

    printf("Enter your number here: \n");
    scanf("%d",&n);

    if(checkStrongNumber(n)){
        printf("Number is a strong number");
    }
    else{
        printf("Not a strong number");
    }

    return 0;
}
