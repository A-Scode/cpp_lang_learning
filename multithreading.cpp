#include <iostream>
#include <thread>


void thread_fun(std::string name){
    for(int i =0;i<200;i++) std::cout<< "I'am " << name << " thread\n";
}

class fun_obj{
    public :
    void operator()(std::string name){
    for(int i =0;i<200;i++) std::cout<< "I'am " << name << " thread\n";
        
    }
};

int main(){

    // benifits of multithreading:-
    // 1 . Responsiveness - listening to port and process request
    // 2 . Resource Sharing - by techniques such as message passing and shared memory
    // 3 . Economy - threads share memory which is more economical
    // 4 . Scalability - can be scalable

    //Thread class uses a callable to perform func on thread

    // callable can be of either three types
        // A function pointer
        // A funciton object
        // a lambda expression

    

    //thread using function pointer
    std::thread thread_obj1(thread_fun , "func pointer");
    std::thread thread_obj2(fun_obj() , "fucn obj");

    thread_obj1.join();
    thread_obj2.join();

    return 0;
}