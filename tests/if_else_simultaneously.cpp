#include <iostream>

int main(){

    if(true){
        std::cout << "I'am in if" << std::endl;

        goto else_label;
    }else{
        else_label:
            std::cout << "I'am in else" << std::endl;

    }    

    return 0;
}