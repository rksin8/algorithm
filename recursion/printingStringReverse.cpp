#include <iostream>



void print(std::string word){
    
    auto length = word.length();
    if( length >=1){
        std::cout << word[length-1] ;
        auto newWord = word.substr(0, length-1);
        print(newWord);
    }
    else{
        std::cout << "" << std::endl;;
    }
}


int main(int argc, char *argv[])
{
    //std::string sentence;
    //std::cin >> sentence;
    //print(sentence);
    
    print("Normal or Reverse");
    return 0;
}
