/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
    int i=0,n;
    vector<int> v;
	PeekingIterator(const vector<int>&v1) : Iterator(v1) 
    {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
        v=v1;
        n=v.size();
        
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() 
    {
        return v[i];    
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next()
    {
	    return v[i++];
	}
	
	bool hasNext() const {
	    return i<n;
	}
};