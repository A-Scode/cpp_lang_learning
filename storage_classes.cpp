#include <iostream>

int c = 50;

class example5{
    public :
        int a=10;
        mutable int b = 20; //it used to make property mutalble on const obj.
};

int main(){

    //storage class used describe features,visibility and lifetime of a variable 

    //there are five storage classes 
        // auto
        // register
        // extern
        // static 
        // mutable


    auto  a = "hello";
    register int  b;
    extern int c;
    static int d = 50;
    const example5 obj1;

    std::cout << "-----------------------------------" << std::endl;

    std::cout << "this is auto :\t\t" << a << std::endl;
    std::cout << "this is register :\t" << b << std::endl;
    std::cout << "this is extern :\t" << c << std::endl;
    std::cout << "this is static :\t" << d << std::endl;


    // obj1.a = 5; //causes error

    obj1.b = 50; // since it is mutable , value can be changed in const obj

    std::cout << "this is mutable :\t" << obj1.b << std::endl;

    
    std::cout << "-----------------------------------" << std::endl;

    d+=50;

    if (d != 300) main();

    return 0;
}