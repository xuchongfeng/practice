//
// Created by FlyFish on 8/13/16.
//

#ifndef TEXTQUERY_QUERYRESULT_H
#define TEXTQUERY_QUERYRESULT_H

#include <vector>
#include <string>
#include <iostream>

#include "TextQuery.h"

class QueryResult {
    friend std::ostream& print(std::ostream&, const QueryResult&);
public:
    using line_no = std::vector<std::string>::size_type;
    QueryResult(std::string s,
                std::shared_ptr<std::set<line_no>> lines,
                std::shared_ptr<std::vector<std::string>> file):
        sought(s), lines(lines), file(file) {}
private:
    std::string sought; // Query Word
    std::shared_ptr<std::set<line_no>> lines; // Word Lines
    std::shared_ptr<std::vector<std::string>> file; // Input File
};

std::ostream& print(std::ostream&, const QueryResult&);

#endif //TEXTQUERY_QUERYRESULT_H
