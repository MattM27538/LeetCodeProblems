int smallestNumber(int n, int t) {
    while(true){
        int smallestDivisibleNumber=n;

        int productOfDigits=1;

        //Multiply all digits of n.
        while(n>0){
            productOfDigits*=(n%10);
            n/=10;
        }

        if(productOfDigits%t==0){
            return smallestDivisibleNumber;
        }

        n=smallestDivisibleNumber;
        ++n;
    }

    return EXIT_FAILURE;
}