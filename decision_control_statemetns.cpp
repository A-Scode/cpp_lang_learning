#include <iostream>
using namespace std;
int main(int* argc , char* argv){

    goto jump_statements;

    if_else:

        //if else statements

        if (true){
            std::cout << "do this" << std::endl;
        }else if (true && (true || false)){
            std::cout << "do else if" << std::endl;
        }else{
            std::cout << "do that" << std::endl;
        }
        goto ret; //commenting this statement cause infinite loop in the program

    jump_statements:

        //jump statements
        for(int i : {2,1,3,5,7,10,50}){

            std::cout << i ;
            if(i ==50 ){
                std::cout << (L" 🤕broken!!") << std::endl;
                break;
            }else if (i % 2 == 0){
                std::cout<< " I'am continue" << std::endl;
                continue;
            }else std::cout<< std::endl;
        }

        goto if_else;

    ret:
        return 0;
}