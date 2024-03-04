#include <iostream>
#include <string>
using namespace std;

int main() {
    string user;
    string phrase;
    size_t pos;
    
    // input words OR phrases, separated by linebreaks (press enter)
    // when you're done, type in "Done", "done", or "d" as the last string
    while (true) {
        getline(cin, user);
        if (user == "Done" || user == "done" || user == "d") {
            break;
        }
        for (pos = user.length() - 1; pos != string::npos; pos--) {
            phrase += user.at(pos);
        }
        // keep each string on its original line, so that we are only
        // reversing strings, and not the linebreaks
        phrase += "\n";
    }
    cout << phrase;
    
    return 0;
}
