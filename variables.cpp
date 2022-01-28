#include <iostream>
#include <cstdlib>

//types of variable in c++ 
        //local variable  -- local to block of scope
        //instance variable  -- variable created when object of class initialized and each obj has own copy of instance variable
        //static variable  -- variable created in class at begining of program and end on termination. there is only one copy of static varible per class

class example{
    protected:
        static int static_var ; //static var
    public:
        int instance_var; //instance var 

        void change_instance_var(int a){
            srand(5);
            int z = rand();  //local var
            std::cout << "the local variable : " << z << std::endl;
            instance_var = a ;
        }

        static void change_static_var(int a){
            example::static_var = a ;
        }

        static void get_staic_var(){
            std::cout<< "the static variable : "  << example::static_var << std::endl;
        }

};

int example::static_var;

int global = 20;

int main(){
    
    example * ptr = new example();
    example * ptr2 = new example();

    ptr->change_instance_var(5) ;
    std::cout << "the instance variable : "  << ptr->instance_var << std::endl;

    ptr2->change_instance_var(20);
    std::cout << "the instance variable : "  <<  ptr2->instance_var << std::endl;

    example::change_static_var(30);
    example::get_staic_var();
    // std::cout<< example::static_var << std::endl;

    //declaring local var as of name with global

    int global = 0;

    std::cout << "the local global : " << global << std::endl;
    std::cout << "the global global : " << ::global << std::endl;
                                        // scope resolution operator
                                        // to access parent scope
    std::cout << sizeof(bool) << std::endl;

    int * chrptr = (int * )malloc(2);

    *chrptr =  0b0100000101000010;

    std::cout << (char) *chrptr << std::endl;

    float hii = 5.5e10f;

    std::cout << hii << std::endl;

    return 0; 
}