#include <stdio.h>

int main(){
    int x =2 , y =3, res; 

    res = x ; 
    while (y != 1 ){
            res *= x; 
            y--;    
        }
        printf("%d",res);
    return 0;
}