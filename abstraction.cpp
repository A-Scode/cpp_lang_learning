#include <iostream>

//Abstraction - it refers to providing only essential information and hiding underlying details
// or implementation

    //types of abstraction in c++
        //Abstraction using classes -  data under private access modifiers
        //Abstraction using header files - fucntions defined in header files

class Abstraction{
    private :
        int a , b , c;

    public :
        void set_abc(int a , int b , int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

        void display_abc(){
            std::cout << "a = " << this->a << std::endl;
            std::cout << "b = " << this->b << std::endl;
            std::cout << "c = " << this->c << std::endl;
        }

};

int main(){

    Abstraction abs ;
    abs.set_abc(454, 34343,3123) ;
    abs.display_abc();

    return 0;
}