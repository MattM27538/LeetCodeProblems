int numberOfSteps(int num) {
    int numberOfStepsToZero=0;

    while(num>0){
        if(num%2 == 0){
            num/=2;
        }
        else{
            num-=1;
        }

        ++numberOfStepsToZero;
    }

    return numberOfStepsToZero;
}