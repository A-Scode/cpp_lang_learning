#include <iostream>
#include <string>
#include <string.h>

//rules of overloading
    //1- function that only differs in return type and not in paramerters are not eligible
    //2- static function with same funciton can't be  overloaded
    //3- ptr and array , funciton ptr and function are treated as same so gives redecleration error
    //4- parameter only differ by default arguments are not acceptable

class overloading_rules{
    // //1
    // int jump(int a);
    // void jump(int a );

    // //2
    // static int get(int a , int b);
    // int get(int a , int b);

    // //3
    // int sum( char arr[] );
    // int sum( char *arr );

    // //4
    // int name(char arr , int x=10);
    // int name(char arr , int x);
};

// Polymorphism - is provision of single interface to entities of different types

    // types
        // compile time polymorphism
            // function overloading - multiple funcitons with same name but different parameters
            // operator overloading - define behaviour of object w.r.t the operator applied on it
        // runtime polymorphism
            // virtual functions

class polymorphism{
    public :
    //compile time - function overloading
         static int sum(int a , int b){
             return a+b;
         }

         static int sum(int a , int b , int c){
             return a+b+c;
         }
    // conmpile time operator overloading
         polymorphism operator + ( int obj){
             polymorphism obj1;
             return obj1 ;
         }

         friend std::ostream& operator << (std::ostream& os ,polymorphism p1){ 
            return  os << "hii I'm polymorphism" ;
         }
};

//runtime polymorphism - virtual function

class poly_base {
    public:
        void print(){
            std::cout << "This is base class" << std::endl;
        }

        virtual void sayHello(){
            std::cout << "Hello I'am virtual fn of base class"<< std::endl;
        }
};

class poly_derived : public poly_base{
    public :
        //overriding print function of base class
        void print(){
            poly_base::print();
            std::cout << "This is derived class" << std::endl;
        }

        void sayHello(){
            std::cout << "This is overrriden virtual fn" << std::endl;
        }
};

//struct 
struct some_struct { 
    public:
        int a ;
        static void print(){ printf("hello\n");}
    protected :
        int b ;
    private :
        int c;
};

int main(){

    std::cout << "sum of 1 2 : " << polymorphism::sum( 1, 2) << std::endl;
    std::cout << "sum of 1 2 3 : " << polymorphism::sum( 1,2 ,3) << std::endl;

    std::cout << "----------using overloaded funciton------------" << std::endl;

    poly_derived d1 , d2;
    d1.print();
    d2.poly_base::print();

    some_struct::print();

    polymorphism p1  ;
    std::cout << p1 << std::endl; //operator <<
    std::cout << p1+3 << std::endl; //operator + overloaded

    poly_base * b1;
    poly_derived d3;
    b1 = &d3;
    b1->sayHello();
    b1->poly_base::sayHello();

    // poly_derived *d4; //this can't be done
    // poly_base b2;
    // d4 = &b2;

    return 0;
}