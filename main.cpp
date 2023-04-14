#include <iostream>


#include "FileHelper.h"
#include "ConsoleHelper.h"
#include "Journal.h"

using namespace std;

int main() {

    auto journal = ImportFromFile("export.psv");
    ShowAll(journal);
    cout << "--------" << endl;

    Insert(journal,"Yakin", "34442");
    ShowAll(journal);
    cout << "--------" << endl;

    UpdateMarks(journal,"Belov", "222");
    ShowAll(journal);
    cout << "--------" << endl;

    UpdateName(journal,"Belov","222", "Bely");
    ShowAll(journal);
    cout << "--------" << endl;

    Delete(journal,"Yakin");
    ShowAll(journal);
    cout << "--------" << endl;

    auto name = FindByName(journal,"Sidorov");
    for(auto item : name){
        cout << item.first << " : " << item.second << endl;
    }
    return 0;
}
