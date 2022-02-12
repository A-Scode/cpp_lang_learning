#include <iostream>

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

class polymorphism{
    public :
         static int sum(int a , int b){
             return a+b;
         }

         static int sum(int a , int b , int c){
             return a+b+c;
         }
};

int main(){

    std::cout << "sum of 1 2 : " << polymorphism::sum( 1, 2) <<std::endl;
    std::cout << "sum of 1 2 3 : " << polymorphism::sum( 1,2 ,3) << std::endl;

    std::cout << "----------using overloaded funciton------------" << std::endl;


}