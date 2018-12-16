#include <iostream>
#include <vector>

std::vector<int> v{0,1};

int fib(int n){
    int tmp = 0;
    if (n <=0)
        return n;
    else if (n == 1)
        return 1;

    int size = static_cast<int>(v.size());
//     std::cout << size << std::endl;
    if (n < size) // n is in v
        return v[n];
    else{
        tmp = fib(n-1) + fib (n-2);
        v.push_back(tmp);
        return v[n];
    }
}

int main(int argc, char *argv[])
{
    /*
    for (int i = 0; i < 11; ++i) {
        std::cout << fib(i) << std::endl;
    }
    */

    std::cout << fib(40) << std::endl;
    
    return 0;
}
