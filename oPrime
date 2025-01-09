#include<stdio.h>
int isPrime(int num){
    if(num<=1)
        return 0;
    for(int i = 2;i*i<=num;i++)
        if(num%i==0)
            return 0;
    return 1;
}
int main(void){
    int i =1;
    int Pnum = 2;

    while(i<=10001){
        if(isPrime(Pnum)){
            printf("%d\t",Pnum);
            i++;
        }
    Pnum++;
    }

    printf("\n");
    return 0;
}
