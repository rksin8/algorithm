#include <iostream>

int multiply(int a, int b){
    if(b==0)
        return 0;
    else if (b==1)
        return a;
    else
        return a + multiply(a, b-1);
}


int main(int argc, char *argv[])
{
    int a, b;
    std::cin >> a >> b;
    std::cout << multiply(a,b) << std::endl;
    return 0;
}
