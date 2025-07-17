int fib(int n){
    int currentFibonacciNumber=0;
    int nextFibonacciNumber=1;

    for(int i=0; i < n; ++i){
        //Update for next two Fibonacci Numbers.
        int temp=nextFibonacciNumber;
        nextFibonacciNumber+=currentFibonacciNumber;
        currentFibonacciNumber=temp;
    }

    return currentFibonacciNumber;
}