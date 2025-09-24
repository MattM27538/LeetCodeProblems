bool person1IsCloserToPerson3(int person1Position, int person2Position, int person3Position){
    return abs(person2Position-person3Position) > abs(person1Position-person3Position);
}

bool person2IsCloserToPerson3(int person1Position, int person2Position, int person3Position){
    return abs(person2Position-person3Position) < abs(person1Position-person3Position);
}

int findClosest(int person1Position, int person2Position, int person3Position) {
    if(person1IsCloserToPerson3(person1Position, person2Position, person3Position)){
        return 1;
    }
    else if (person2IsCloserToPerson3(person1Position, person2Position, person3Position)){
        return 2;
    }

    return 0;
}