void calculateNextFibonacciNumbers(int* currentFibonacciNumber, int* nextFibonacciNumber){
    int temp=*nextFibonacciNumber;
    *nextFibonacciNumber+=*currentFibonacciNumber;
    *currentFibonacciNumber=temp;
}

int fib(int n){
    int currentFibonacciNumber=0;
    int nextFibonacciNumber=1;

    for(int i=0; i < n; ++i){
        calculateNextFibonacciNumbers(&currentFibonacciNumber, &nextFibonacciNumber);
    }

    return currentFibonacciNumber;
}