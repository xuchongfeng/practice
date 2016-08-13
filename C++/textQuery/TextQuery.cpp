//
// Created by FlyFish on 8/13/16.
//
#include <sstream>
#include <fstream>

#include "TextQuery.h"

TextQuery::TextQuery(std::ifstream &is): file(new std::vector<std::string>) {
    std::string text;
    while(std::getline(is, text)) {
        file->push_back(text);
        u_long n = file->size() - 1;
        std::istringstream line(text);
        std::string word;
        while (line >> word) {
            auto &lines = wm[word];
            if (!lines) {
                lines.reset(new std::set<line_no>);
            }
            lines->insert(n);
        }
    }
}

QueryResult TextQuery::query(std::string &word) const {
    static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);

    auto loc = wm.find(word);
    if (loc == wm.end()) {
        return QueryResult(word, nodata, file);
    } else {
        return QueryResult(word, loc->second, file);
    }

}

