#include <iostream> //file inclusion [standard]
#include "imports/sampleImport.h"  //file inclusion [user defined]
#define area_of_rec(l,b) (l*b);  //macro

#ifndef limit
#define limit 10;
#endif

#ifdef limit
#undef limit
#endif

//types of prerocessor directives
//  Macros
//  File Inclusion
//  Conditional compilation
//  Other directives

int main(){
    int a = 50;
    int b = 70;
    std::cout << "area of rectangle : " << area_of_rec(a,b) ;
    std::cout << std::endl;
    std::cout << "left shift of 1 " << (1ULL << 32 ) << std::endl; //33 is larger than sizeof(unsigned)
    sampleImport::print_hello();
    // or pulling from namespace
    using namespace sampleImport;
    print_hello();
    return 0;
}