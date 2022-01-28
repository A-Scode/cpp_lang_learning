#include <iostream>

class example2{
    public :  //public member can be acessed anywhere in the program by other class and functions too
        int a=10, b;

        int get_c(){
            return example2::c;
        }

    private : //private member can be only accessed by member in the class and friend class or func & not allowed direct access by object or fucntion outside the class
        int c=20 , d;
    
    protected : //protected member is same as private but it can be accessed in the subclass
        int e=30 , f;

        friend class  example3;
};

class example3{
    public :
        static int get2_private( example2 obj){
           return obj.d; 
        }
};

//inheritance
class example4 : private example2{
    public :
         //constructor
         example4(){
             std::cout << "example4 instanciated" << std::endl;
         }

        //declaration done
        void display_example2_data();
};


//definition
void example4 :: display_example2_data(){
    std::cout << example2::e << std::endl;

}

int main(){

    example2 * obj1  = new example2();
    std::cout  << obj1->b << std::endl;

    //another way of initializing objects

    example2 obj2 ;
    obj2.a = 50;
    std::cout << obj2.a << std::endl;
        // . is a member access operator


    std::cout << obj2.get_c() << std::endl;

    std::cout << example3::get2_private(obj2)  << std::endl;

    example4 obj3;
    obj3.display_example2_data();
    


    return 0;
}

