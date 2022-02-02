#include <iostream>

//Advantages of array
    //Random acces using index
    //few lines to create array of multiple elements
    //Easy access to all elements
    //Traversal using single loop
    //sorting become easy


//Disadvantages of array
    //limited no. of elements as not dynamic
    //insertion and deletion is costly as new memory is allocated


int main(){

    int arr1[] = {5,34,32,34,56,45,343,34};

    //No out of bounds checking
    arr1[20] = 50;
    std::cout << arr1[20] << std::endl;


    std::cout << "sizeof arr1 : " << 
        sizeof arr1 / sizeof(int) << std::endl;

    

    return 0;
}
