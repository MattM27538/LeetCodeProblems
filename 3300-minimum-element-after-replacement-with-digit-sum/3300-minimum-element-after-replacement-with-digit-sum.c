int min(const int firstNumber, const int secondNumber){
    return firstNumber < secondNumber ? firstNumber : secondNumber;
}

void sumDigitsFromNum(int* sumOfDigitsInNum, int num){
    while(num > 10){
        *sumOfDigitsInNum += num % 10;
        num /= 10;
    }

    if(num == 10){
        *sumOfDigitsInNum += 1;
    }
    else {
        *sumOfDigitsInNum += num;
    }
}

void replaceElementInNumsWithSumOfElementsDigits(int* nums, const int numIndex, const int sumOfDigitsInNum){
    nums[numIndex] = sumOfDigitsInNum;
}

void updateMinimumElementInNumsAfterSummingDigits(int* minimumElementInNumsAfterSummingDigits, const int sumOfDigitsInNum){
    *minimumElementInNumsAfterSummingDigits = min(*minimumElementInNumsAfterSummingDigits, sumOfDigitsInNum);
}

int minElement(int* nums, int numsSize) {
    int minimumElementInNumsAfterSummingDigits = INT_MAX;

    for(int numIndex = 0; numIndex < numsSize; ++numIndex){
        int num = nums[numIndex];
        int sumOfDigitsInNum = 0;

        sumDigitsFromNum(&sumOfDigitsInNum, num);
        
        replaceElementInNumsWithSumOfElementsDigits(nums, numIndex, sumOfDigitsInNum);

        updateMinimumElementInNumsAfterSummingDigits(&minimumElementInNumsAfterSummingDigits, sumOfDigitsInNum);
    }
    
    return minimumElementInNumsAfterSummingDigits;
}