#include <iostream>
#include <vector>
#include <list> //doubly linked list
#include <deque>
#include <array>
#include <forward_list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <unordered_set>

#include <bits/stdc++.h>


#define tostr(a) #a

template < typename t2 = int , typename t1= std::vector<t2>  >
void show_container(std::string str ,t1 vec1){
    std::cout << str << " : " ;
    for (auto i : vec1){
        std::cout << i << ' ' ;
    }
    std::cout<< std::endl;

}

template < typename t2 = int  >
void show_container(std::string str , std::map<t2 , t2> map1){
    std::cout << str << " : " << std::endl ;
    for(auto it = map1.begin() ; it != map1.end() ; it++){
        std::cout<< "\t" << it->first << "\t" << it->second << std::endl;

    }

}

template < typename t2 = int  >
void show_container(std::string str , std::multimap<t2 , t2> map1){
    std::cout << str << " : " << std::endl ;
    for(auto it = map1.begin() ; it != map1.end() ; it++){
        std::cout<< "\t" << it->first << "\t" << it->second << std::endl;

    }

}

int main() {



    std::vector<int> vec1 = {324,234,345,234,6,5};

    std::cout << "size : " << vec1.size() << std::endl;
    std::cout << "max_size : " << vec1.max_size() << std::endl;
    std::cout << "capacity : " << vec1.capacity() << std::endl;
    vec1.resize(30);
    std::cout << "after resize : " << vec1.size() << std::endl;
    std::cout << "is empty : " << vec1.empty() << std::endl;
    vec1.shrink_to_fit() ;
    std::cout << "after shrinking : " << vec1.size() << std::endl;
    vec1.reserve(40);
    std::cout << "after reserve : " << vec1.size() << std::endl;


    //refrence operator 
    std::cout << "fourth element is : " << vec1[3] << std::endl;

    std::cout << "fourth element is : " << vec1.at(3) << std::endl;

    std::cout << "front element : " << vec1.front() << std::endl;
    std::cout << "back element : " << vec1.back()  << std::endl;

    //pointer to memory location internally used by vector

    std::cout << "data pointer : " << vec1.data() << std::endl;

    std::cout << "using data pointer : " << *(vec1.data()+3) << std::endl;

    //modifiers

    vec1.assign(5  , 4);
    show_container(tostr(vec1),vec1);

    vec1.push_back(5);
    show_container(tostr(vec1),vec1);

    vec1.pop_back();
    show_container(tostr(vec1),vec1);

    vec1.insert(vec1.begin()+3, 50); //at fourth position or index 3
    show_container(tostr(vec1),vec1);

    vec1.erase(vec1.begin()+3);
    show_container(tostr(vec1),vec1);

    std::vector <int> vec2 = {34,34,3,4,2,3,2,34,3,3,2,3,2232,34,33,34,};
    
    vec1.swap(vec2);
    show_container(tostr(vec1),vec2);

    vec1.erase(vec1.begin() , vec1.begin()+2); //erasing range of elements form vec
    show_container(tostr(vec1),vec1);

    vec2.clear();
    show_container(tostr(vec2),vec2);

    vec1.emplace(vec1.begin()+3 , 579);
    show_container(tostr(vec1),vec1);

    vec1.emplace_back(34);
    show_container(tostr(vec1),vec1);

    std::cout<< std::endl <<std::endl;

    //list  or doubly linked list
    // lists allow non-contigious memory allocation 
    // slow traversal
    // but quick insertion and deletion

    std::list<int> l1 = {3223,34,436,3214,67,234,7,34,64,2346,3454};

    show_container<int , std::list<int>>("l1" , l1);

    std::cout<< "l1 front : " << l1.front() << std::endl;
    std::cout<< "l1 back : " << l1.back() << std::endl;
    
    l1.pop_front();
    show_container<int, std::list<int>>("l1 pop_front()" ,l1) ; 


    l1.pop_back();
    show_container<int, std::list<int>>("l1 pop_back()" , l1);
    
    l1.reverse();
    show_container<int, std::list<int>>("l1 pop_back()" , l1);
    
    // [] operator not overloaded for list
    // + also not overloaded for list
    std::list<int>::iterator it = l1.begin();

    std::advance(it , 2);
    std::cout<< "l1 2 index : "  << *it <<std::endl;

    std::advance(it , 3); // 0+2+3 =5
    std::cout<< "li 5 index : " << *it << std::endl;

    //inserting 5 occurences of 10 at index 5
    l1.insert(it , 5 , 10);
    show_container<int , std::list<int>>("l1 : " , l1);

    // is empty
    std::cout<< "l1 is empty : " << l1.empty() << std::endl;

    l1.push_front(1);
    l1.push_back(1);

    show_container<int, std::list<int>>("l1 push" , l1);

    l1.remove(1);;

    show_container<int, std::list<int>>("l1 remove()" , l1);

    std::cout<< "l1 size : " << l1.size() << std::endl;

    std::cout<< "l1 can hold : " << l1.max_size() << std::endl;

    //removing duplicates

    l1.unique();

    show_container<int, std::list<int>>("l1 unique()" , l1);

    std::cout<< "l1 size : " << l1.size() << std::endl;

    std::list <int> l2  = {983,234,4,234,3,4,4,34};

    l1.merge(l2);

    show_container<int, std::list<int>>("l1 merge()" , l1);

    // Deque (Double Ended Que)
    // Effiecient insertion and deletion 
    // memory alloction not guaranteed to be contigious
    // insertion and deletion allowed only at begin and end

    std::deque<int> dq1 =  {5,98,54,5,58,1,25};

    show_container<int, std::deque<int>>("dq1" , dq1);

    //push_back and push_front
    dq1.push_back(151);
    dq1.push_front(151);

    show_container<int, std::deque<int>>("dq1" , dq1);

    //pop_back and push_front
    dq1.pop_back();
    dq1.pop_front();

    show_container<int, std::deque<int>>("dq1" ,dq1);

    std::deque<int>::iterator dqit = dq1.begin();

    std::cout<< "dq 0 index : " << *dqit << std::endl;

    std::cout<< "dq 5 index : " << *(dqit+5) << std::endl;

    // Array
    // Array classes know its size. so we do not need to pass size
    // no risk of array to be decayed into pointer like C-style arrays

    std::array<int , 10 > arr1 = {55,5,555,77,66,66,4,2};

    std::array<int , 10> arr2 ;

    //operation

    std::cout<< "arr1 index 2 : "  <<  arr1.at(2) << std::endl;

    std::cout<< "arr1 front : " << arr1.front() << std::endl;

    std::cout<< "arr1 back : " << arr1.back() <<std::endl;

    std::cout<< "arr1 size : " << arr1.size() << std::endl;

    std::cout<< "arr1 max size : " << arr1.max_size() << std::endl;

    //swap arrays 
    arr1.swap(arr2); //size should be same
    show_container<int , std::array<int,10> >("arr1" , arr1);
    show_container<int , std::array<int,10 >>("arr2" , arr2);

    std::cout<< "arr1 empty : " <<arr1.empty() << std::endl;

    arr1.fill(10);

    show_container <int,std::array<int,10>>("arr1" , arr1) ;

    //forward lists
    // time constant insertion and deletion and moving operations
    // doubly linked list stroe address of prev and next it uses more storage
    // whereas forward list only stores add. of next element
    // drawback only forward traversal no backward trversal

    std::forward_list<int> fls1 ;
    std::forward_list<int> fls2;

    //assign two methods
    fls1.assign({12,54,11,1,2,8,3,45,1,54});
    fls2.assign(5 , 10);

    show_container<int, std::forward_list<int>>("fls1" , fls1);
    show_container<int, std::forward_list<int>>("fls2" , fls2);

    fls1.push_front(10);
    fls1.emplace_front(20);

    show_container<int, std::forward_list<int>>("fls1" , fls1);

    fls1.pop_front();

    show_container<int,std::forward_list<int>>("fls1" , fls1);

    std::forward_list<int>::iterator fsit1 = fls1.begin();
    std::advance(fsit1 , 2);

    fls1.insert_after(fsit1  , 151);
    show_container<int,std::forward_list<int>>("fls1" , fls1);

    // std::advance(fsit1 , -1);

    fls1.emplace_after(fsit1 , 100);
    show_container<int,std::forward_list<int>>("fls1" , fls1);

    fls1.erase_after(fsit1);
    show_container<int,std::forward_list<int>>("fls1" , fls1);


    fls1.remove(1); //removes all the occurences of 1
    show_container<int,std::forward_list<int>>("fls1" , fls1);

    fls1.remove_if([](int x){return x>50;});
    show_container<int,std::forward_list<int>>("fls1" , fls1);

    fls2.splice_after(fsit1 , fls1);
    show_container<int,std::forward_list<int>>("fls1" , fls1);

    //queue
    // allow insertion from back and deletion from front

    std::queue<int> q1 ;

    q1.push(10);
    std::cout << "q1 front : " << q1.front() << "\tq1 back : " << q1.back()<<std::endl;

    q1.push(20);
    std::cout << "q1 front : " << q1.front() << "\tq1 back : " << q1.back()<<std::endl;

    q1.push(30); 
    std::cout << "q1 front : " << q1.front() << "\tq1 back : " << q1.back()<<std::endl;
    std::cout<< "q1 size : " << q1.size() <<std::endl;

    q1.pop();
    std::cout << "q1 front : " << q1.front() << "\tq1 back : " << q1.back()<<std::endl;
    std::cout<< "q1 size : " << q1.size() <<std::endl;
    

    q1.pop();
    std::cout << "q1 front : " << q1.front() << "\tq1 back : " << q1.back()<<std::endl;
    std::cout<< "q1 size : " << q1.size() <<std::endl;

    q1.pop();
    std::cout << "q1 front : " << q1.front() << "\tq1 back : " << q1.back()<<std::endl;
    std::cout<< "q1 size : " << q1.size() <<std::endl;

    //priority_queue
    // queue but it is sorted

    std::priority_queue<int> pq1;
    pq1.push(50);
    std::cout << "pq1 top : " << pq1.top() << std::endl;
    std::cout<< "pq1 size : " << pq1.size() << std::endl;

    pq1.push(10); 
    std::cout << "pq1 top : " << pq1.top() << std::endl; //50 will be at top
    std::cout<< "pq1 size : " << pq1.size() << std::endl;

    pq1.pop();
    std::cout << "pq1 top : " << pq1.top() << std::endl;
    std::cout<< "pq1 size : " << pq1.size() << std::endl;
    

    //stack 
    //uses an encapsulated list , vector or deque as underlying container
    // uses LIFO type of working

    std::stack<int , std::deque<int>> st1;

    st1.push(10);st1.push(55); st1.push(42);
    std::cout<< "st1 top : " << st1.top() << "\tst1 size : " << st1.size() << std::endl;

    st1.push(65);st1.push(870); st1.push(47);
    std::cout<< "st1 top : " << st1.top() << "\tst1 size : " << st1.size() << std::endl;

    st1.pop();
    std::cout<< "st1 top : " << st1.top() << "\tst1 size : " << st1.size() << std::endl;


    //set (associative container)
    // elemnet in sorted order
    // all elemnets have unique values
    // value added in set can't be modified , only can be removed and agian pushed
    // immutable values
    // sets follow binary tree implementation
    // values in set are unindexed

    std::set<int> s1 = {3254,357,7,28,28,45} ;

    s1.insert(2);
    s1.insert(28875);
    s1.insert(85);
    s1.insert(276);
    s1.insert(27);
    s1.insert(27); // will not be inserted since contain only unique values


    show_container<int , std::set<int>>("s1" , s1);

    std::cout<< "s1 276 : "  << *s1.find(276) << std::endl;

                        //find returns the pointer to given element found in the set
    s1.erase(s1.begin() , s1.find(85));
    show_container<int , std::set<int>>("s1" , s1);

    std::set<int , std::greater<int> > s2 = {34,23,3,34,987,87,2,45};

    show_container<int , std::set<int , std::greater<int>>>("s2" , s2);

    std::cout<< "34 lower_bound : " <<  *s2.lower_bound(34) << std::endl;
    std::cout<< "34 upper_bound : " <<  *s2.upper_bound(34) << std::endl;

    //multiset

    // same as set but with exception that it can hold multiple same values

    std::multiset<int , std::less<int> > ms1 = {54,57,255,4714,54,54,54,12,12};
    //can hold multiple same values unlike set

    ms1.insert(50);
    ms1.insert(51);

    show_container<int , std::multiset<int, std::less<int>>>("ms1" , ms1);

    ms1.erase(54); //erases all 54 s
    
    show_container<int , std::multiset<int, std::less<int>>>("ms1" , ms1);


    std::multiset<int, std::less<int>>::iterator msit1 = ms1.begin() ;
    std::advance(msit1 , 1);
    ms1.erase(ms1.begin() , msit1); //erases only one element

    show_container<int , std::multiset<int, std::less<int>>>("ms1" , ms1);

    ms1.insert(51);
    ms1.insert(51);
    ms1.insert(51);
    ms1.insert(51);

    std::cout << "51 s in ms1 : " << ms1.count(51) << std::endl;
    show_container<int , std::multiset<int, std::less<int>>>("ms1" , ms1);


    // map
    // each element has a key value pair
    // no two values can have same keys

    std::map<int, int> mp1 = {std::pair<int, int>(5,10),
                              std::pair<int, int>(6,12),
                              std::pair<int, int>(5,10),
                              {8 , 16},
                              {9 , 18}
                              }; // 5,10 will be inserted one time only


    // pair return {7,14}
    mp1.insert(std::pair<int ,int>(7,14));
    mp1.insert({10,20});
    mp1.insert({11 , 22});
    mp1.insert({12 , 24});

    show_container<int>("mp1" , mp1);

    std::cout<< "mp1 size : " << mp1.size() << std::endl;
    std::cout<< "mp1 max_size : " << mp1.max_size() << std::endl;

    std::cout<< "mp1 10 lower_bound : " << mp1.lower_bound(10)->second << std::endl;
    std::cout<< "mp1 10 upper_bound : " << mp1.upper_bound(10)->second << std::endl;

    mp1.erase(9);// directly deleted by key

    show_container<int>("mp1" , mp1);

    mp1.erase(mp1.find(8));
    show_container<int>("mp1" , mp1);

    //multimap
    // same as map and also sorted but it can hold value with multiple same keys
    std::multimap<int,int> mmp1 = {{2,4},
                                    {3,6},
                                    {2,4},
                                    {4,8},
                                    {4,8}};
    
    show_container<int>("mmp1" ,mmp1);


    std::unordered_set<std::string> us1 ={"hello" , "hii"};

    us1.insert("what's up");
    us1.insert("hmm...");
    us1.insert("hmm...");
    us1.insert("hmm...");
    us1.insert("hmm..."); //inserted only once bcoz it is set

    show_container<std::string , std::unordered_set<std::string>>("us1" , us1);

    if(us1.find("hmm...") != us1.end()) 
        printf( "%p\n" , us1.find("hmm...") );

    std::cout<< us1.count("hmm...")  << std::endl; //used to check if elem exsists

    std::cout<< "No. of buckets in us1 : " << us1.bucket_count() << std::endl;

    std::cout<< "No.of elems in bucket us1.bucket(\"hmm...\") : " << us1.bucket_size(us1.bucket("hmm...")) << std::endl;

    us1.erase( us1.find("hmm..."));

    show_container<std::string , std::unordered_set<std::string>>("us1" , us1);


    std::unordered_multiset<std::string> ums1 ={"hello" , "hii"};

    ums1.insert("what's up");
    ums1.insert("hmm...");
    ums1.insert("hmm...");
    ums1.insert("hmm...");
    ums1.insert("hmm..."); //inserted only once bcoz it is set

    show_container<std::string , std::unordered_multiset<std::string>>("ums1" , ums1);

    if(ums1.find("hmm...") != ums1.end()) 
        printf( "%p\n" , ums1.find("hmm...") );

    std::cout<< ums1.count("hmm...")  << std::endl; //used to check if elem exsists

    std::cout<< "No. of buckets in ums1 : " << ums1.bucket_count() << std::endl;

    std::cout<< "No.of elems in bucket ums1.bucket(\"hmm...\") : " << ums1.bucket_size(ums1.bucket("hmm...")) << std::endl;

    ums1.erase( ums1.find("hmm..."));

    show_container<std::string , std::unordered_multiset<std::string>>("ums1" , ums1);

    

     return 0;
}