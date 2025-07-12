#include <iostream>
#include <string>

int main(int argc , std::string * argv[]){

    //c style strings 
    const char *cstr3 = "Macro"; //stored in higher address
    char cstr1[] = "Macro"; //adress < cstr3
    char cstr2[] = {'M' , 'a' , 'c' , 'r' , 'o' ,'\0'}; //address < cstr1

    //c++ style strings
    std::string cppstr1 = "Macro";
    std::string cppstr2("Macro");

    std::cout<< cppstr1 << std::endl << cppstr2 << std::endl;

    //cpp strings have superpowers like 
    //concatination ,  copying etc.

    std::string cppstr3 =  cppstr2;

    std::cout << cppstr3 + cppstr2 << std::endl;
    printf("%d\n" , cstr1 > cstr2);


    return 0 ;
}