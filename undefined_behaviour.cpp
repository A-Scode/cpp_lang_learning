#include <iostream>
#include <cstdint>
int main(){

    //undefined behaviours 

    std::cout << (float)5/0 << std::endl;

    int arr[3] ={5,5,5} ;
    std::cout << arr[2] << std::endl;

    int a = INT64_MAX;
    std::cout<< a+1 << std::endl;

    //NULL pointer
    // int * ptr1 = NULL;
    // std::cout<< *ptr1 << std::endl;

    char str1[11] = "shouryaraj";
    str1[0] = '$';
    std::cout << str1 << std::endl;


    return 0;
}