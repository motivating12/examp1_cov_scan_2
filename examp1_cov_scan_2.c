#include <stdio.h>
#include <stdlib.h>
int buffer[10]={0};
void f1(int data){//Annotate ’data’ as data source for SUTURE and Sliver
    fscanf(stdin, "%d", &data); //coverity scan
    int tmp = -1;
    if(data){
        tmp = 1;
    }
    printf("%d\n",buffer[tmp]);//suture sink
}
