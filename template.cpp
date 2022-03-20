#include <iostream>
#include <vector>

//template is a tool in cpp in which we pass return type as parameter 
// so we do not have to write same code for other types


//it is like macro but with type checking 
//it is expanded at compile time

template <typename type >
type max (type a , type b){
    if (a < b ) return b;
    else return a ;
}


template < typename t , typename t2  = std::vector<t> >
t * sort_arr( t2* vec ){

    for ( t* i  =  (t*)vec ; i != &(vec->back()) ; i++){
        for ( t* j = (t*) vec ; j != &(vec->back()) ; j++){
            std::cout << *i << " : " << *j << std::endl;
            if (*i > *j ){
                 t tmp = *j ;
                 *j = * i;
                 *i = tmp;
                 
                 }
        }
    }

}


int main(){

    std::cout<<"for char : " << max<char>('a' , 'A') << std::endl;
    std::cout<<"for int : "<< max<int>(55 , 45) << std::endl;

    std::cout<<"checking for strings : " << max<std::string>("hello", "what") << std::endl;

    std::vector <int > vec1 = {45,5,54,35,257,257856,4227,2574,6,576};

    std::vector  < std::string> vec2 = {"hello" , "hii" , "whatsapp"};

    std::cout << sort_arr<int>(&vec1) << std::endl;

    sort_arr<int , std::vector<int>>(&vec1);

    return 0;
}