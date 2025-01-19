#include<stdio.h>

void move(int n, int a, int c ,int b);

void move1(int disks, int a, int b, int c){
    if(disks==0) return;
    move(disks-1, a, c, b);
    printf("move disk from %d to %d \n", a, c);
    move1(disks-1, c,b,a);
  }

int main(){
int disks;
printf("Enter No. of Disks \n");
scanf("%d",&disks);
move(disks,1,3,2);
return 0;

}

void move(int n, int a, int c, int b){

  if(n>0){
    move(n-1,a,b,c);
    printf("Move disk from %d to %d \n",a,c);
    move(n-1,b,c,a);
  }
  return;
}