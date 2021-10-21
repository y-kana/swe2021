// sample 1-2
#include <stdio.h>
int main(){
    int i = 10;
    float j = 3.3;
    char k = 'a';
    char l = '1';
    i = i/17; // i の中身を「iを100倍したもの」で上書き
    j = j / 17;
    k += l;
    printf("i = %d \n", i);
    printf("j = %f \n", j);
    printf("k = %d \n", k);
}