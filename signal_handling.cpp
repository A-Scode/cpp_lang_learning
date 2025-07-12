#include <iostream>
#include <csignal>

void abrt_handle(int signal_num){
    std::cout<<  "Program terminated with signal no. : " << signal_num << std::endl;

}

int main(){

    //signal handling
    
    //registering signal with handler fun
    std::signal( SIGFPE , abrt_handle);
    static int x =1;

    while (x++){
        std::cout << "I'am infinte" << std::endl;

        if (x > 100) raise( SIGFPE); //raise to raise error
    }


    return 0;
}