#include <iostream>
#include <string>

//class - is a user defined data type which holds own data member and member functions
// it can be accessed by creating instance
// no memory allocated to class

//object - is and identifiable entity with some characterstics and behaviour
    //is instance of class. 
    //memory is allocated when obj is instantiate

class person{

    //properties are private by default
    int age ;
    char* name;

    public:
        //constructor 
        person( int age ,char * name){
            this->age = age;
            this->name =  name ;
            std::cout << "A new person in the world has born."<< std::endl;
        }

    void print_details();
};

void person::print_details(){
    std::cout << "Age : " << this->age << std::endl;
    std::cout << "Name : " << this->name << std::endl;
}

int main(){
    person shyam( 50 , (char*)"shyam"); // memory allocated here
    // here type casting due to efficient memeory size


    std::cout<< "sizeof preson : " << sizeof(shyam) << std::endl;

    return 0;
}