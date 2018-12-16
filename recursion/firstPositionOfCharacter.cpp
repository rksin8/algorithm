#include <iostream>
#include <string>

int firstPost(std::string word, char c, int pos = 0){
    
    if(word.length()==0)
        return 0;
    else if (word.length() == 1 && word[0] != c)
        return -pos;
    else if (word[0]==c)
        return 1;
    else{
        auto newWord = word.substr(1, word.length()-1);
        return 1 + firstPost(newWord, c, pos+1);
    }
}


int main(int argc, char *argv[])
{
    std::string word; 
    char c;
    std::cin >> word >> c;

    std::cout << "Word length = " << word.length() << std::endl;
    std::cout << firstPost(word, c) << std::endl;
    return 0;
}
