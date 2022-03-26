/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
    int search(const ArrayReader& v, int k) 
    {
        
        long s=0,e=INT_MAX;
        int ans=-1;
        int x=INT_MAX;
        
        while(s<=e)
        {
            long mid=s+(e-s)/2;
            if(mid>=x)
            {
                return x;
            }
            if(v.get(mid)==k)
            {
                return mid;
            }
            else if(v.get(mid)<k)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
    }
};