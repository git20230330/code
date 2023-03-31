
//230331-#2367
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
    
       int size = nums.size();
       int nmax = nums[size-1];
       int ret = 0;
       for(int i=0;i<size;i++){
           if(nums[i]+2*diff>nmax){
               continue;
           }
           int key1 = nums[i]+diff;
           int key2 = nums[i]+2*diff;
           if (std::find(nums.begin(), nums.end(), key1) != nums.end()) {
               if (std::find(nums.begin(), nums.end(), key2) != nums.end()) {
                   ret++;
               }
             }
            else{
                continue;
            }
       }
       return ret;
        
    }
};