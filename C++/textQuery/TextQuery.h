//
// Created by FlyFish on 8/13/16.
//

#ifndef TEXTQUERY_TEXTQUERY_H
#define TEXTQUERY_TEXTQUERY_H

#include <string>
#include <memory>
#include <vector>
#include <map>
#include <set>

#include "QueryResult.h"

class QueryResult;
class TextQuery {
public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery(std::ifstream&);
    QueryResult query(std::string&) const;
private:
    std::shared_ptr<std::vector<std::string>> file; // Input File
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm; // Word -> Lines
};

#endif //TEXTQUERY_TEXTQUERY_H
