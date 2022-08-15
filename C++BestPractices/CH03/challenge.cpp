#include <iterator>
#include <iostream>
#include <vector>
#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>

namespace fs = boost::filesystem;
fs::path filePath{"challenge.txt"};

void write_file(){

    int num = 1;
    char * buf[10];

    fs::ofstream ofs{filePath};
    for(const auto & f : buf){
        ofs << num << "\n";
        num++;
    }

}

int main(int argc, char * argv[]){

    write_file();
    fs::remove(filePath);

}