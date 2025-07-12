#include <iostream>

int main(){
    //bitwise operator 
    std::cout << ~2 << std::endl; //bitwise not
    std::cout << (0b1001 ^ 0b0111) << std::endl; //xor operator

    //logical operator
    std::cout << (4&& 10) << std::endl;

    //assignment operator
    int a = 15;
    int d = 5;
    d*=5;
    std::cout << d << std::endl;
    a <<= d;
    std::cout << (a) << std::endl;
    
    //relational operator
    
    std::cout << (d< a)  << std::endl;

    //arithmetic operator
    std::cout << 50 / 10 << std::endl;

    //other operators 
    // sizeof  ,[comma operator] conditional [ternary operator]

    std::cout << sizeof d << std::endl;
    std::cout << (10,5,15) << std::endl; // process all operands and return last one
    std::cout << (1?"hii":"hello") << std::endl;

    

    return 0;
}