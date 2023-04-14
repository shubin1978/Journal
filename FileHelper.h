#pragma once

#include <fstream>
#include <string>
#include <map>

using namespace std;

map <string,string> ImportFromFile(string path){
    map <string,string> result;
    ifstream file;
    file.open(path);
    if (!file.is_open()) {
        std::cerr << "Error: Failed to open file !" << endl;
    }
    string  line;
    while (getline(file,line)){
        int position = line.find('|');
        string name = line.substr(0,position);
        string marks = line.substr(position + 1);

        result.insert(pair<string,string>(name,marks));
    }
    file.close();
    return result;
}
void ExportToFile(string  path, map<string, string>& journal){
    ofstream file;
    file.open(path);

    for (auto item : journal){
        file << item.first << "|" << item.second << endl;
    }
    file.close();
}
