#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char* argv[]) {
    int freq[26] = {0};
    for (int i = 1; i < argc; i++) {
        string text = argv[i];
        for (char ch : text) {
            if (isalpha(ch)){
                ch = tolower(ch);
                freq[ch - 'a']++;
            }
        }
    }
    cout << "Alphabet occurrences:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char('a' + i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}
