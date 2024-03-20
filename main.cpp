#include <iostream>
#include <utility>
#include <vector>

int main() {
    std::vector<std::string> words = {"hello",
                                      "goodbye",
                                      "beans",
                                      "thing"};
    std::vector<std::pair<std::string, int >> vect_of_words;
    for (auto word: words) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == 'e') {

                vect_of_words.emplace_back(std::make_pair(word, i));

                //  store the word twice
            }
        }
    }
    for (const auto&[word, pos]: vect_of_words) {
        std::cout << word << " " << pos << std::endl;
    }
    return 0;
}
