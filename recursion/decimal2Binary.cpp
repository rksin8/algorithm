#include <iostream>

using namespace std;

string decimal2Binary(int n){

    if(n==0)
        return "";
    else{
        int q = n / 2;
        int r = n % 2; // reminder
        auto s = (r==0) ? "0" : "1";
        return   decimal2Binary(q) + s;
    }
}


int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;

    std::cout << decimal2Binary(n) << std::endl;
    return 0;
}
