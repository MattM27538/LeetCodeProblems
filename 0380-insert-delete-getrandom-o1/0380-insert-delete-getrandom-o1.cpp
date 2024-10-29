class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(valToSetIndexMap.find(val)==valToSetIndexMap.end()){
            randomizedSet.push_back(val);
            valToSetIndexMap[val]=currIndex;
            ++currIndex;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(valToSetIndexMap.find(val)==valToSetIndexMap.end()){return false;}
        //swap index value to be deleted with last index of set, pop back, then
        //update map index value for swapped value.
        int indexOfValToDelete=valToSetIndexMap[val];
        int temp = randomizedSet[indexOfValToDelete];
        randomizedSet[indexOfValToDelete]=randomizedSet[randomizedSet.size()-1];
        randomizedSet[randomizedSet.size()-1]=temp;
        randomizedSet.pop_back();
        valToSetIndexMap[randomizedSet[indexOfValToDelete]]=indexOfValToDelete;
        
        valToSetIndexMap.erase(val);
        --currIndex;
        return true;
    }
    
    int getRandom() {
        return randomizedSet[rand()%randomizedSet.size()];
    }
    
private:
    vector<int> randomizedSet;
    unordered_map<int,int>valToSetIndexMap;
    int currIndex=0;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */