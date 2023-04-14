#pragma once
#include <string>
#include <map>
#include <iterator>

using namespace std;

void Insert(map<string, string>& journal, string name, string marks) {
    journal.insert(pair<string, string>(name, marks));
}

void UpdateMarks(map<string, string>& journal, string name, string marks){
    auto it = journal.find(name);
    if (it != journal.end()){
        it->second = marks;
    }
}
void UpdateName(map<string, string>& journal, string name, string marks, string newname){
    for (auto item : journal) {
        if (item.second == marks and item.first == name) {
            journal.insert(pair<string, string>(newname, marks));
            journal.erase(name);
            return;
        }
    }
}
void Delete(map<string, string>& journal, string name){
    journal.erase(name);
}

map<string,string> FindByName(map<string,string>& journal, string name){
    map<string,string> result;
    for (auto item:journal){
    //    if (item.first == name){
    //          result.insert(item);
    //    }

        auto it = journal.find(name);
        if (it == journal.end()){
            result.insert(pair<string ,string> ("no student", name));

        } else if (item.first == name){
            result.insert(item);
        }

    }
    return result;
}

