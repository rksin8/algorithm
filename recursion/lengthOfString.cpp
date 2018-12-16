#include <iostream>
#include <iostream>


int length(std::string word){

    if (word=="")
        return 0;
    else{
        auto newWord = word.substr(1, word.length()-1);
        return 1 + length(newWord);
    }
}


int main(int argc, char *argv[])
{
    std::string word;
    std::cin >> word;

    std::cout << length(word) << std::endl;
    return 0;
}
