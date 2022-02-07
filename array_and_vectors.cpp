#include <iostream>
#include <vector>


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

    //address of all elements 

    for (int i = 0 ; i < sizeof arr1 / sizeof(int) ; i++){
        std::cout << "adress of elem " << i << " : " << &arr1[i] <<std::endl;
        
    }

    //vector
        // vectors are dynamic arrays which has ability to resize itself
        //when an element is inserted or deleted. In vectors data is inserted at end
        // inserting data at end takes diffrential time.
        //removing last element takes constant time
        // removing from start or middle takes linear time

    std::vector <int> v1;


    for (int i =0 ; i <=10 ; i++) v1.push_back(i);
    v1[2] = 5;

    //itrators
                                //end() gives address of last elem +1
    for (auto i = v1.begin() ; i !=  v1.end() ; i ++) std::cout << *i << " ";
    std::cout << std::endl;
    for (auto i = v1.cbegin() ; i !=  v1.cend() ; i ++) std::cout << *i << " ";
    std::cout << std::endl;
    for (auto i = v1.rbegin() ; i !=  v1.rend() ; i ++) std::cout << *i << " ";
    std::cout << std::endl;
    for (auto i = v1.crbegin() ; i !=  v1.crend() ; i ++) std::cout << *i << " ";
    std::cout << std::endl;

    //capacity

    std::vector <int> v2[10];
    
    std::cout << "size : " << v1.size() << std::endl;
    std::cout << "max_size : " << v1.max_size() << std::endl;
    std::cout << "capacity : " << v1.capacity() << std::endl;
    v1.resize(20);
    std::cout << "resize : " << v1.size() << std::endl;
    std::cout << "empty : " << v1.empty() << std::endl;
    v1[23] = 45;
    std::cout << "v1[23] : " << v1[23] << std::endl; //only vec.at(index) checks for out of bounds

    v1.shrink_to_fit(); //destory all elements beyond its defined size and keep rest
    std::cout << "v1[23] : " << v1[23] << std::endl;

    v1.reserve(25); //this will reserve memory of 25 elems without reallocation it will work
    //if greater than 25 are inserted than reallocation of memory takes place
    //Element access

    std::cout << "v1[4] : " << v1[4] << std::endl;
    std::cout << "v1.at(4) : "  << v1.at(4) << std::endl;
    std::cout << "v1.front() : "  << v1.front() << std::endl;
    std::cout << "v1.back() : "  << v1.back() << std::endl;
    
    //Modifiers

    std::vector <int> v3[20];
    v3->assign(10 , 100);
    for (auto i = v3->cbegin() ; i != v3->cend() ; i++) std::cout << *i << " ";
    std::cout << std::endl;

    v3->push_back(20);
    for (auto i = v3->cbegin() ; i != v3->cend() ; i++) std::cout << *i << " ";
    std::cout << std::endl;

    v3->pop_back();
    for (auto i = v3->cbegin() ; i != v3->cend() ; i++) std::cout << *i << " ";
    std::cout << std::endl;

    auto ptr = v3->insert(v3->begin(),20); //insert element before specified elem
    for (auto i = v3->cbegin() ; i != v3->cend() ; i++) std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << "newly inserted element is : " << *ptr << std::endl;

    v3->erase(v3->begin());
    for (auto i = v3->cbegin() ; i != v3->cend() ; i++) std::cout << *i << " ";
    std::cout << std::endl;

    //swaping arrays
    std::cout << "After swaping" << std::endl;
    v3->swap(v1);
    std::cout << "v1 : ";
    for (auto i = v1.cbegin() ; i != v1.cend() ; i++) std::cout << *i << " ";
    std::cout << std::endl;
    std::cout << "v3 : ";
    for (auto i = v3->cbegin() ; i != v3->cend() ; i++) std::cout << *i << " ";
    std::cout << std::endl;

    //clearing
    std::cout << "After clearing..." << std::endl;
    v1.clear();
    std::cout << "v1 : ";
    for (auto i = v1.cbegin() ; i != v1.cend() ; i++) std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << *(v3->emplace(v3->begin()+2 , 10)) << std::endl;

    std::cout << "v3 : ";
    for (auto i = v3->cbegin() ; i != v3->cend() ; i++) std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << "value returned by emplace : " << v3->emplace_back(500)  << std::endl;


    return 0;
}
