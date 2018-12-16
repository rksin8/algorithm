#include <iostream>
#include <cmath>

int powerSum(int X, int N, int k=1){

    auto tmp = std::pow(k,N);
    
    if(tmp == X)
        return 1;
    else if( tmp  > X )
        return 0;
    else{
        int remaining = X - std::pow(k,N);
        return powerSum(X,N, k+1) + powerSum(remaining, N, k+1);
   }
}


int main(int argc, char *argv[])
{
    int X,N;
    std::cin >> X>>N;
    std::cout << powerSum(X,N) << std::endl;
    return 0;
}
