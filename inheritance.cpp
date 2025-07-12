#include <iostream>

class vehicle{
    private:
        int fuel_capacity;
        int current_fuel;
        bool has_breaks;

    public:
    vehicle( int fuel_capacity , int current_fuel , bool has_breaks, bool me = false){
        if (fuel_capacity < current_fuel){
            delete this;
        }else{
            this->fuel_capacity = fuel_capacity ;
            this->current_fuel = current_fuel;
            this->has_breaks = has_breaks;
            std::cout << "vehicle instantiated" << std::endl;
            if (me) std::cout << "this is me" << std:: endl;
        }
    }

    virtual ~vehicle(){
        std::cout << "vehicle is deleted" << std::endl;
    }

    int fuelAmmount(){
        return this->current_fuel;
    }
    int capacity(){
        return this->current_fuel;
    }
    std::string applyBreaks(){
        if(this->has_breaks) return "break applied";
        return "break failed";
    }

    virtual int get_no_of_wheels() = 0;

};

//Modes of inheritance
    // public Mode : public mem will be public & proteced mem will be protected
    // protected Mode : public & protected mem will be public
    // private Mode : both prulic & private mem will be private mem.

//Types of inheritance
    // Single inheritance
    // Multiple inheritance
    // Multilevel inheritance
    // heirical inheritance // more than one class is derived from single base class
    // hybrid(virtual) inheritance // more than one type of inheritance


//Single inheritance
class car :  public vehicle {
    public:
        car(int fuel_capacity , int current_fuel , bool has_breaks)
        :vehicle( fuel_capacity ,current_fuel ,has_breaks ){            
            std::cout << "created vehicle is " << std::endl;
        }
        ~car(){
            std::cout << "car is destructed"<< std::endl;
        }

        int get_no_of_wheels(){
            return 4;
        }

    private:
        int is_self_start = true;
};

// hybrid inheritance 
class truck : virtual public vehicle , public car{
    public:
    //contructor called in order they are inherited

    truck(int fuel_capacity , int current_fuel , bool has_breaks ):
    car( fuel_capacity ,  current_fuel , !has_breaks),
    vehicle(fuel_capacity ,  current_fuel , has_breaks , true ){
        std::cout << "truck is instantiated" << std::endl;
    }

    int get_no_of_wheels(){
        return 8;
    }

};

//hierarchial inheritance
class miniTruck: public car ,  public truck{

public:
    miniTruck(int fuel_capacity , int current_fuel , bool has_breaks):
    car(fuel_capacity ,  current_fuel , !has_breaks),
    truck(fuel_capacity ,  current_fuel , !has_breaks),
    vehicle(fuel_capacity ,  current_fuel , !has_breaks , true){
        std::cout << "miniTruck initiated" << std::endl;
    }

    int get_no_of_wheels(){
        return 3;
    }


};

 main(){

     car* car1 = new truck(20 , 5 , true); //new keyword make class return pointer to it
     std::cout << car1->get_no_of_wheels() << std::endl;

     std::cout << car1->applyBreaks() << std::endl; //methode overwitten by last inheritance

    //here the vehicle consturctor called two times due to double super inheritance
    // to prevent it we use virtual keyword

     delete car1;


    //also a example of multilevel inheritance
     miniTruck * mtruck = new miniTruck(46,5 , false);

     std::cout << mtruck->get_no_of_wheels() << std::endl;

}