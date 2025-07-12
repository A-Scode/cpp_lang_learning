#include <iostream>

// using namespace std; //to pull all definition in std namespace

/*
this is some multiline comment in the program
*/

int main(){
    using/*testing comment*/ std::cout;   //not using namespace just only a cout function
    std::cout << "Hello world!!"; // here :: [scope operator]  used to specify namespace
    std::cout << "This is some second line" ;
    cout << "\rLLL"; //move the cursor to start of line and start over writting
    printf("\v\vthis is simple printf\b\b\b\b");
    getchar();

    return 0;
}