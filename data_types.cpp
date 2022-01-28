#include <iostream>

//Premitive data type:int , char, bool , float, double,void, wchar_t(used to store unicode values , size id 2-4 bytes)
//Derived data type: functions , array , pointer , reference
//User defined data type: class , struct , union , enum , typedef

bool k = 0;

int main(){
    std::cout << "hello world" << std::endl;

    // wchar usage
    wchar_t wchar = L'k';
    std::wcout << wchar << std::endl;
    std::cout << "sizeof wchar_t is : " << sizeof wchar << " bytes" << std::endl ;

    //values for unintialized vars
    int a ;
    char b;
    float c;
    double d;
    wchar_t e;
    // void f;

    std::cout << a << std::endl,
    std::cout << b << std::endl,
    std::cout << c << std::endl,
    std::cout << d << std::endl,
    std::cout << e << std::endl;
    // std::cout << f << std::endl;

    return 0;
}