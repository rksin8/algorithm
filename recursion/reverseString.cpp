#include <iostream>
#include <string>
#include <vector>

using namespace std;

string reverse(vector<string> v, int size)
{
  if(size==0)
   return "";
  else if(size==1)
    return v[size-1];  
  else
      return v[size-1] + " " + reverse(v, size-1);
}


string reverse(string word){
    
    if(word.length()==1)
        return word;
    else if (word.length()>=2){
        auto length = word.length();
        auto a = word[length-1];
        auto b = word[0];
        auto newWord = word.substr(1, length-2);
        return a + reverse(newWord) + b;
    }else
        return "";
}

int main(int argc, char *argv[])
{
    std::vector<string> v{"cat", "is", "running"};
    std::cout << reverse(v,3) << std::endl;


    std::cout << reverse("rama") << std::endl;
    std::cout << reverse("ramesh") << std::endl;
    return 0;
}
