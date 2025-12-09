#include <iostream>
#include <string>

int main() {
    std::string word;

    std::cout << "Введите строку: ";
    std::getline(std::cin, word);
    
    bool isIsogram = true;
    
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == ' ') {
            continue;
        }

        for (int j = i + 1; j < word.length(); j++) {
            if (word[j] == ' ') {
                continue;
            }

            if (tolower(word[i]) == tolower(word[j])) {
                isIsogram = false;
                break; 
            }
        }

        if (!isIsogram) {
            break;
        }
    }
    
    std::cout << (isIsogram ? "true" : "false") << std::endl;
    
    return 0;
}
