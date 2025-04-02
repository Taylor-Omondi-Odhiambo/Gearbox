#include <stdio.h>

int track = 0;

void fibonacci(int n){

    int t1 = 0;
    int t2 = 1;
    int next;
    printf("Fibonnacci Sequence\n");
    for (int x = 0; x < n; x++){

        next = t2 + t1;
       
        printf("%d\n",t2);
        t1 = t2;
        t2 = next;
    }   
}

void fibRecursion(int w, int x, int z){

    int t1 = w;
    int t2 = x;
    int next;
    
    if (track < z){

        printf("%d\n",t2);

        next = t2 + t1;
        t1 = t2;
        t2 = next;
       
        track ++;
        fibRecursion(t1, t2, z);
    }
}

int main(){

    int n;
    printf("How many terms of the sequence do you want to print?\n");
    scanf("%d",&n);
    //fibonacci(n);
    printf("Fibonnacci Sequence\n");

    fibRecursion(0, 1, n);
    return 0;
}