#include <iostream>


int sumOfDigits(int x){
    
    if(x<10)
        return x;
    else
        return x%10 + sumOfDigits(x/10);
}


int main(int argc, char *argv[])
{
    int x;
    std::cin >> x;
    std::cout << sumOfDigits(x) << std::endl;
    return 0;
}
