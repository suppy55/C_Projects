#include<stdio.h>
int main(void){
    int govern = 0;
    int counter = 0;
    for(int i = 11;govern==0;i++){
        counter=0;
        for(int j=2;j<=10;j++){
            if(i%j==0)
                counter+=1;
            else
                break;
        }
        if(counter==9){
            printf("%d\n",counter);
            govern=1;
            printf("%d\n",i);
        }
    }

    return 0;
}
