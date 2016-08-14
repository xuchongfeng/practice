//
// Created by FlyFish on 8/13/16.
//
#include "QueryResult.h"

std::string make_plural(unsigned long size, const std::string &str, const std::string &extra) {
    if (size <= 1) {
        return str;
    } else {
        return str + extra;
    }
}

std::ostream &print(std::ostream &os, const QueryResult &result) {
    os << result.sought << " occurs " << result.lines->size()
       << " " << make_plural(result.lines->size(), "time", "s") << std::endl;

    for (auto num : *result.lines) {
        os << "\t(line " << num + 1 << ") " << *(result.file->begin() + num) << std::endl;
    }

    return os;
}

