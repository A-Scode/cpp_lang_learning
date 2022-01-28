#include <iostream>
#include <bitset>
#include <algorithm>

int main(){

    // loops is a sequence of instruction that is repeated until a certain condition reached
    
    //types of loops 
        //1. Entery controlled loop - for and while 
        //2. Exit controlled loop - do while

    for(int i =0 ; i < 10 ; i+=2){
        std::cout << "I'am a for loop!!" << std::endl;
    }

    int i = 0;

    while(i < 10){
        std::cout << "I'am a while loop!!" << std::endl;
        i+=2;
    }

    i =0;

    do{
        std::cout << "I'am a do while loop!!" << std::endl;
        i+=2;
    }while(i < 10);

    //infinite for loop
    // for (;;){
    //     std::cout << "I'am an Infinite for loop!!" << std::endl;
    // }

    //range based for loops
    for (auto i : { 1,6,354,222,0xfe65ff }){
        std::cout << "I'am a range based for loop : " <<  i << std::endl;
    }

    //for each loop in c++ [available in <algorithm>]
                            // lambda function in c++

    int arr[] = {53,56,77,66,4565,24};
    std::for_each( arr , arr+6 , [](int &a){ std:: cout << a << std::endl; });

    return 0;
}