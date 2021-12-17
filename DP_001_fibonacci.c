#include<stdio.h>


long fibo_r(int n){
    long f;
    if (n <= 2)
        f = 1;
    else
        f = fibo_r(n-1) + fibo_r(n-2);
    return f;
}

int main(){

    int n;
    printf("Fibonacci number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d.\t%ld\n", i, fibo_r(i));

    return 0;
}
