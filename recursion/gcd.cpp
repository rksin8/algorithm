#include <iostream>


int gcd(int a, int b){
    int max = (a> b) ? a : b;
    int min = ( a< b ) ? a : b;

    int reminder = max % min;

    if(reminder == 0)
        return min;
    else{
        return gcd(reminder,min);
    }
}

int main(int argc, char *argv[])
{
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;
    return 0;
}
