#include <iostream>


int sum(int a[], int b[], int size){
    int sum=0;
    for (int i = 0; i < size; ++i) {
        sum += a[i] + b[i];
    }

    return sum;
}

int recursiveSum(int a[], int b[], int size){
    int sum =0;
    if(size==0)
        return 0;
    else
        sum = a[size-1] + b[size-1];
        return sum + recursiveSum(a, b, size-1 );
}



int sumArray(int a[], int size){
    int sum = 0;
    sum = a[size-1];
    if (size==0)
        return 0;
    else 
        return sum + sumArray(a, size-1);

}

int main(int argc, char *argv[])
{
    int a[]={1,2,3};
    int b[]={1,2,3};

    std::cout << sum(a,b,3) << std::endl;
    std::cout << sumArray(a,3) << std::endl;

    std::cout << recursiveSum(a,b,3) << std::endl;
    return 0;
}
