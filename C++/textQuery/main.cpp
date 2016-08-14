//
// Created by FlyFish on 8/13/16.
//
#include <iostream>
#include <fstream>

#include "TextQuery.h"

int main() {
    std::string word;
    std::ifstream is("file.txt");
    std::cout<<is.is_open()<<std::endl;
    TextQuery tq(is);
    while (1) {
        std::cout<<"Enter word, q to quit"<<std::endl;
        std::string s;
        if (!(std::cin >> s) || s == "q") {
            return 0;
        }
        print(std::cout, tq.query(s));
    }
}

