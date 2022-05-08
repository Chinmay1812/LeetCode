class NestedIterator {
    vector<int> container;
    int cur = 0;
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        for (auto& item : nestedList) {
            if (item.isInteger()) {
                container.push_back(item.getInteger());
            } else {
                NestedIterator nestIterator(item.getList());
                
                while (nestIterator.hasNext()) {
                    container.push_back(nestIterator.next());
                }
            }
        }
    }
    
    int next() {
        return container[cur++];
    }
    
    bool hasNext() {
        return cur < container.size();
    }
};