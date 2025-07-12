#include <iostream>

//while executing code main is not the first fun called
//_start() sets up environment variable and other things
//and calls main()

int someFunc();

//redefing _start to run program without main()
int _start(){
    return someFunc();
}


// kind of coustom main() function
int someFunc(){
    printf("this is working without main");
    return 0;
}