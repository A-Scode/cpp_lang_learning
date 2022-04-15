#include <iostream>

int main(){
    int x = -1 ;

    // throw ;

    std::cout << "Before try block" << std::endl;
    try{
        if(x < 0){
            throw "a";
        }

    }catch(int x){ // will catch if x is thown
        std::cout<< "I'am in catch" << std::endl;

    }catch(...){  //catches all errors
        std::cout<< "I'am in catch all" << std::endl;
    }
}