#include <iostream>

int * dangling(){
    int * ptr = new int(5);
    delete ptr;
    return ptr;
}

int main(){
    int *ptr = new int(20);
    std::cout<< ptr << std::endl;
    std::cout << *ptr << std::endl;
    delete ptr;
    std::cout<<  "dangling : " << ptr << std::endl;
    std::cout<<  "dangling : " << *ptr << std::endl;

    int * ptr2 = dangling();

        std::cout<< ptr2 << std::endl;
    std::cout << *ptr2 << std::endl;


    return 0;
}