#include <iostream>
#include <fstream>

int main(){

    //reading file 

    //open using constructor
    std::ifstream fin = std::ifstream("files/sample.txt" , std::ios::in);

    std::string line;
    while( !fin.eof()){
        getline(fin , line);

        std::cout << line << std::endl;
    }

    fin.close();

    //writing file

    std::ofstream fout;

    //open using open method
                                    //default in ofstream
    fout.open("files/sample2.txt" , std::ios::out);

    // reading from console and write directly to file

    std::cout<< "Enter text to write into file (-1 to end input) : "  << std::endl;


    while(true){
        getline(std::cin , line );

        if (line == "-1") break;

        fout << line << std::endl;
    }

    std::cout << "file success fully written !!" << std::endl;

 
    fout.close();

    //appengin to sample2.txt

    std::ofstream fapp;
    std::cout<< "Enter text to append into file (-1 to end input) : "  << std::endl;

                                 //trunc discards all content before opening file                   
    fapp.open("files/sample2.txt" , std::ios::trunc | std::ios::app);

    while (true)
    {
        getline(std::cin , line);

        if(line == "-1") break;

        fapp << line << std::endl;
    }

    fapp.close();
    




    return 0;
}