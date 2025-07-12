#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <valarray>

int main(){

    std::vector<int > vec = {65,87,6,658,9,4,56,54,2,4,2465,1,651,241,54,12,412,45};
     // sorting 

    std::cout << "sorting" << std::endl;
    std::cout << "the vec is : ";
    for (int i : vec){
        std::cout << i << " " ;
    }
    std::cout << std::endl;
    std::sort<std::vector<int>::iterator>(vec.begin() ,vec.end());

    std::cout << "the sorted vec is : ";

    for (int i : vec){
            std::cout << i << " " ;
        }

        std::cout << std::endl;

    //binary_search

    std::cout << std::binary_search(vec.begin() , vec.end() , 465)  << std::endl;
    std::cout << std::binary_search(vec.begin() , vec.end() , 46)  << std::endl;

    //stl funcs

    std::reverse(vec.begin() , vec.end());
    for (int i : vec){
        std::cout << i << " " ;
    }

    std::cout << std::endl;

    std::cout << "max : " << *std::max_element(vec.begin() , vec.end()) << std::endl;
    std::cout << "min : " << *std::min_element(vec.begin() , vec.end()) << std::endl;
    std::cout << "sum : " << std::accumulate(vec.begin() , vec.end() , 0) << std::endl;  // in numeric
                                                            //start summation from 0

    std::cout << "count 412 : " << std::count(vec.begin() , vec.end() , 412) << std::endl ;

    std::cout << "find 412 : " << vec.end() - std::find(vec.begin() , vec.end() , 412) << std::endl;

    //first occurance of element
    std::cout << "first occurence : " << vec.end()- std::lower_bound(vec.begin() , vec.end() , 4) << std::endl;
    std::cout << "last occurence : " << vec.end()- std::upper_bound(vec.begin() , vec.end() , 4) << std::endl;

    //delting element

    vec.erase(std::find(vec.begin() , vec.end() ,4));

    for (int i : vec){
        std::cout << i << " " ;
    }

    std::cout << std::endl;

    std::next_permutation(vec.begin() , vec.end());
    reverse(vec.begin() , vec.end());
    for (int i : vec){
        std::cout << i << " " ;
    }
    std::cout << std::endl;

    std::next_permutation(vec.begin() , vec.end());
    reverse(vec.begin() , vec.end());
    for (int i : vec){
        std::cout << i << " " ;
    }
    std::cout << std::endl;

    std::next_permutation(vec.begin() , vec.end());
    reverse(vec.begin() , vec.end());
    for (int i : vec){
        std::cout << i << " " ;
    }

    std::cout << std::endl;

    std::cout << "the distance is : " << std::distance(vec.begin() , vec.end()) << std::endl;

    //all_of

    std::all_of(vec.begin() , vec.end() ,  [] (int x){ return x > 0;})?
    std::cout << "all are positive" << std::endl:
    std::cout << "all are not positve"<< std::endl;

    //any_of
    std::any_of(vec.begin() , vec.end() , [](int x ){return x > 0;})?
    std::cout << "at least one is positive" << std::endl:
    std::cout << "at least one is not positve"<< std::endl;

    //none_of
    std::none_of(vec.begin() , vec.end() , [](int x ){ return x > 0;})?
    std::cout << "none of are positive" << std::endl:
    std::cout << "none of are negative"<< std::endl;

    //copy_n 

    int new_vec[vec.size()] ;
    std::copy_n(vec.begin() , vec.size() , new_vec);

    for (int i : new_vec){
        std::cout << i << " " ;
    }

    std::cout << std::endl;

    //iota
     
    int new_vec2[10];
    std::iota(new_vec2 , new_vec2+10 , 30);
    
    for (int i : new_vec2){
        std::cout << i << " " ;
    }

    std::cout << std::endl;


    //vector partitioning

    //check for partioned

    std::is_partitioned(vec.begin() , vec.end() , [] (int x ){return x%2 ==0;})?
    std::cout<<  "vec is partitioned" << std::endl:
    std::cout << "vec is not partitioned" << std::endl;

    //partioning
    std::partition(vec.begin() , vec.end() , [](int x){return x%2== 0;});

    //again checking for patition

    std::is_partitioned(vec.begin() , vec.end() , [] (int x ){return x%2 ==0;})?
    std::cout<<  "vec is partitioned" << std::endl:
    std::cout << "vec is not partitioned" << std::endl;

    //printing vec

    for (int i : vec ){
        std::cout << i << " " ;
        }

        std::cout<< std::endl;
    //stable partition
    std::stable_partition(vec.begin() , vec.end()  , [](int x) {return x % 2 ==0;});
    //preservers the order of partition

    //partition point - pointer to element a partition

    std::vector<int>::iterator point = std::partition_point(vec.begin() , vec.end() , [](int x){ return x%2 == 0;});

    for (std::vector<int>::iterator i = vec.begin() ; i != point ; i++ ){
        std::cout << *i << " " ;
        }
    std::cout<< std::endl;

    //saving patitions to two different vecs

    int part1[10];
    int part2[10];

    std::partition_copy(vec.begin(), vec.end() ,part1  , part2 , [](int x){return x%2 ==0;} );

    std::cout << "part1 : " << std::endl;
    for (int* i = part1 ; i != part1+10 ; i++ ){
        std::cout << *i << " " ;
        }
    std::cout<< std::endl;

    std::cout << "part2 : " << std::endl;
    for (int* i = part2 ; i != part2+10 ; i++ ){
        std::cout << *i << " " ;
        }
    std::cout<< std::endl;

    //valarray

    //same as vector but efficient mathematical operations

    std::valarray <int> varray = {54,68,247,25,124,5,24,21,543,56};

    //apply 

    varray = varray.apply([](int x) {return x+=10 ;});

    std::cout << "valarray : " ;
    for (int i : varray) std::cout << i << " " ;
    std::cout << std::endl;

    //sum 

    std::cout << "valarray sum : " << varray.sum() << std::endl;

    // min max

    std::cout << "min  : " << varray.min() << std::endl;

    std::cout << "max  : " << varray.max() << std::endl;

    //shift and cshift (circular shift)

    std::cout << "valarray shift : ";
    for (int i : varray.shift(-3) ) std::cout << i << " " ;
    std::cout << std::endl;


    std::cout << "valarray cshift : ";
    for (int i : varray.cshift(-3) ) std::cout << i << " " ;
    std::cout << std::endl; 


    std::valarray<int> varray2 = {324,54,34,6,45,54353,545,45,4545,6,5};

    varray2.swap(varray);

    std::cout << "valarray swap : ";
    for (int i : varray2 ) std::cout << i << " " ;
    std::cout << std::endl; 
    
    

    return 0;
}