#include <iostream>


int pellNumber(int n){
    
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return 2* pellNumber(n-1) + pellNumber(n-2);
}



// With memorization
int pellNumberM(int n){

    return n;
}


int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    std::cout << pellNumber(n) << std::endl;
    return 0;
}
