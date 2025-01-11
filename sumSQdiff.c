#include<stdio.h>

int SQsumf(int i){
    int sum=0,SQsum;
    for(int itr=1;itr<=i;itr++){
        sum=itr+sum;
    }
    SQsum=sum*sum;
    return SQsum;
}

int SUMsqf(int i){
    int tempsq;
    int SUMsq=0;
    for(int itr=1;itr<=i;itr++){
        tempsq=itr*itr;
        SUMsq=SUMsq+tempsq;
    }
    return SUMsq;
}

int main(void){
    int diff=SQsumf(100)-SUMsqf(100);
    printf("The result is %d\n",diff);
}
