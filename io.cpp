#include <iostream>

//iostream contains definations of cout , cin , cerr , clog
//iomanip contains defination of methods for manipulating io streams [setw , setprecision]
//fstream used to handle data being read from and written to streams

int main(){
    std::ios_base::sync_with_stdio(false); //will turn of sync and make io faster upto 5-8 times

    int age ;
    std::cout << "Enter your age : " ;
    std::cin >> age;
    //cerr is unbuffured error output stream
    std::cerr << "you entered " << age << " years" << '\n';
    std::flush(std::cout);

    //buffered error output stream
    std::clog << "this is some logged error" << std::endl;

    // endl vs \n
    /*
    1.endl is a manipulator                         1.\n is character
    2.it doesn't occupy memory                      2.occupy 1byte as it is char
    3.no meanig when is in quotes                   3.specified meanig in quotes
    4.only supported by c++                         4.supported by C/C++ and others also
    5.keeps flushing queue of output buffer         5.flushes output only once at the end of program
    */
   // \n is faster in performace than endl

   
    //problem with scanf
    char str[10];
    for (int i = 0 ; i <= 5 ; i++){
        int d;
        printf("Enter the digit : ");
        scanf("%d", &d);
        fgets(str ,10200 ,stdin);
        printf("the digit is : %d\n", d);
        puts("-----------------------------------------");
    }


    return 0;
}