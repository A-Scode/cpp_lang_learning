#include <iostream>
#include <vector>
#define tostr(str) #str

//template is a tool in cpp in which we pass return type as parameter 
// so we do not have to write same code for other types


//it is like macro but with type checking 
//it is expanded at compile time

template <typename type >
type max (type a , type b){
    if (a < b ) return b;
    else return a ;
}


//Bubble sort using template
//function template
template < typename t , class t2  = std::vector<t> >  //typename or class used interchangebly
t2 * sort_arr( t2* vec ){
    static t2 temp_arr;
    temp_arr = *vec;
    for (int i = 0; i < temp_arr.size() ; i++){
        for ( int j = 0 ; j < temp_arr.size() ; j++){
            if (temp_arr[i] > temp_arr[j]){
                t tmp = temp_arr[j];
                temp_arr[j] = temp_arr[i];
                temp_arr[i] = tmp;
            }
        }
    }
    return  &temp_arr;
}

//class template 
template <class type >
class printType{
    public:
        printType(){
            std::cout << tostr(type) << std::endl; 
            //will print type bcoz , it is done by preprocessor at compile time
        }
};

//static vars in template 

template <class t > //there exists multiple copy of a func at compile time so 
//diff func calls have diff static member
t fun_add(t x){
    static int k = 10;
    k+=x;
    return k;

}

//specialized template code for specific datatype
template <>
char fun_add <char>(char x){
    std::cout << "this is char : " << x << std::endl;
}


int main(){

    std::cout<<"for char : " << max<char>('a' , 'A') << std::endl;
    std::cout<<"for int : "<< max<int>(55 , 45) << std::endl;

    std::cout<<"checking for strings : " << max<std::string>("hello", "what") << std::endl;

    std::vector <int > vec1 = {45,5,54,35,257,257856,4227,2574,6,576};

    std::vector  < std::string> vec2 = {"hello" , "hii" , "whatsapp"};

    
    

    for (int i : *sort_arr<int , std::vector<int>>(&vec1)){
        std::cout << i << std::endl;
    }
    for (int i =0 ; i < vec2.size() ; i++){
        std::cout << vec2[i] << std::endl;
    }

    printType<int > pt;

    std::cout << fun_add<int>(5) << std::endl;
    std::cout << fun_add<int>(2) << std::endl;

    std::cout << fun_add<double>(5.0) << std::endl;
    std::cout << fun_add<double>(2.0) << std::endl;

    fun_add<char>('a');



    return 0;
}