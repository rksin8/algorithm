#include <iostream>
#include <string>

int firstPost(std::string word, char c){
    
    if(word.length()==0)
        return 0;
    else if (word[0]==c)
        return 1;
    else{
        auto newWord = word.substr(1, word.length()-1);
        return 1 + firstPost(newWord, c);
    }
}


int main(int argc, char *argv[])
{
    std::string word; 
    char c;
    std::cin >> word >> c;

    std::cout << firstPost(word, c) << std::endl;
    return 0;
}
