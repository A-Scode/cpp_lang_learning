#include <iostream >

struct s1 {
    int age;
    std::string name;
};

struct cust
{
    int p;
    cust(int q) : p(q) {}
};

int main(){

    // new operator used dynamically allocate memory of any built-in or user defined
    // type and return address to the memory location

    //new can be used to allocate block of memory of date type
    //this new dynamically allocated memory is allcoated on heap


    s1 * student_array =  new s1[10];

    // normal dec vs new arr dec
    // normal dec frees mem with end of fun but new have to released by user

    *student_array = {10 , "hello"};

    student_array+=2;

    *student_array = {12 , "hii"};

    student_array -=2;

    for (int i = 0 ;  i < 10 ; i++){
        std::cout << student_array[i].age << " : "  << student_array[i].name << std::endl;
    }

    //dynamically allocated memory does not deallocate automatically 
    // so we have to dealloacte before program terminates to prevent memory leak

    // std::cout << student_array << std::endl;

    delete[] student_array;

    // pointer declaration with initialized value

    int * p = new(std::nothrow) int(54); //will give null pointer if no spcae available 
    //else case by default it throws error bad_alloc

    std::cout << "*p : " << *p << std::endl;


    delete p;
    

    return 0;
}