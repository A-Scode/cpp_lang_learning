#include <iostream>
#include <stdlib.h>


//creating a class does not allocate memory
class car {

    //access modifier
    public:
        //data members
        int a , b;
        float speed ;

        //member functions
        void increase_speed(float _by){
            this->speed += _by;
        }
        float get_speed();

        //constructor - func. called on initialization of obj
            //Default
            //Parameterized  - which takes parameter 
            //Copy consturctor - special constructor called when obj is copied by another obj
        
        //Default
        car(){
            std::cout << "Defautl constructor is called" << std::endl;
        }

        //Parameterized
        car(int a , int b){
            this->a = a;
            this->b = b;
        }

        //Copy constructor 
        car( car &p){
            
            std::cout << "copy constructor is called : " << p.a << std::endl;
        }

        //Destructor - called when object memory is freed
        ~car(){
            std::cout<< "Destructor is called for object" << std::endl;
        }
};

//defining outside
float car::get_speed(){
    return this->speed;
}



int main(){

    //Default constructor is called
    class ::car obj1; //instanciating obj allocates memory

    std::cout << obj1.a << std::endl;

    //Parameterized constructor is called
    car obj2(5 , 6);
    std::cout << obj2.a << " " << obj2.b << std::endl;

    car obj3 = obj2; //copy constructor is called

    do{
    car obj4 ;
    }while(0);




    return 0;
}