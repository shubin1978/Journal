#include <iostream>
#include <string>
#include <map>

using namespace std;

void ShowAll(map<string, string>& journal){
    for(auto item : journal){
        cout << item.first << " : " << item.second << endl;
    }
}