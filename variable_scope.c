#include<stdio.h>

int add(int x, int y){
    int result = x + y;
    return result;
}
int main(){
    int result = add(4,6);
    printf("%d",result);
}