#include<stdio.h>

void printFibonacci(int n, int prev, int prev1){

    if(n<2){
        return;
    }
    int curr;
    curr=prev+prev1;
    prev= prev1;
    prev1=curr;
    printf("%d ", curr);
    printFibonacci(n-1,prev,prev1);    
}

int main(){
    printf("%d ",0);
    printFibonacci(9,0,1);
    return 0;
}