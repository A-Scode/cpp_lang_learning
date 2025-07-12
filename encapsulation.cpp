#include <iostream>

//Encapsulation - is technique of data hiding achived by binding together
//data and functions that manipulate them

class Encapsulation{
    private :
        int x = 50; //property accible to only instances therefore hidden from others
    public:
        //function set value of x setter function
        void set_x(int x){
            this->x = x;
        }

        //function to get value of x getter function
        int get_x(){
            return this->x;
        }

};

int main(){
    

    return 0;
}