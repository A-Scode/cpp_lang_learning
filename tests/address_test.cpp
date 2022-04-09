#include <iostream>

void ptr(int &a){ //only works in cpp not in c
    printf("%d\n" , a);
    a = 40;
}

int main(){
    int x = 10;
    ptr(x);
    printf("%d\n" , x);

    return 0;
}