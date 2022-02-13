#include <iostream>

class Parent{
    public :
        int hands = 2;
        int legs = 2;
        std::string name ;

        Parent( std::string  name){
            this->name = name;
        }

        void get_my_name(){
            std::cout << "My name is : " << this->name << std::endl;
        }
};

class Child : public Parent {
    public :
        Child(std::string  name):Parent(name){
        }

};

int main(){

    Child c1("hmm");

    c1.get_my_name();        

}