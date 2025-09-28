#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

bool isUnique(string &str){
    set<char> charSet;
    for (char c : str){
        if (charSet.count(c)){
            return false;
        }
        charSet.insert(c);
    }
    return true;
}

bool isUniqueSorted(string &str){
    sort(str.begin(), str.end());
    for (int i = 1; i < int(str.size()); i++){
        if (str[i] == str[i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    string text = "hello";
    if (isUnique(text)){
        cout << "All characters are unique." << endl;
    } else {
        cout << "There are duplicate characters." << endl;
    }
    if (isUniqueSorted(text)){
        cout << "All characters are unique (sorted check)." << endl;
    } else {
        cout << "There are duplicate characters (sorted check)." << endl;
    }
    return 0;
}