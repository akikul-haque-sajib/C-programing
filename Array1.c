#include<stdio.h>
int main(){
    int numbers[]={20,40,1,100,-4};

    int max=numbers[0];
    int min=numbers[0];

    for(int index=1;index<6;index++){
        if(max<numbers[index]){
            max=numbers[index];
        }

        if(min>numbers[index]){
            min=numbers[index];
        }
    }
    printf("The maxmimum =%d\n",max);
    printf("The Minimum =%d\n",min);



return 0;
}
