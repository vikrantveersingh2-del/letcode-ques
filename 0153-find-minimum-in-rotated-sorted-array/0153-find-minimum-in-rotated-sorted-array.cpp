class Solution {
public:
    int findMin(vector<int>& nums) {
       int low = 0,high = nums.size()-1;
       int ans = INT_MAX;
       while(low<=high){
        int mid = (low+high)/2;
        // yaha par hamne sabse phele check kiya hai ki left vala portion sorted hai ya nhi agar vo sorted hai to arr of low hamesa chota hoga arr[]<=mid , thik hai or agar ye sorted hai to low or ans se min find kar lenge or esko eleminate karege low ko mid+1 bna kar 
        if(nums[low]<=nums[mid]){
            ans = min(ans,nums[low]);
            low = mid+1;
        }
        // yaha par hmne aa jana hai agar vo sorted nahi h to hame left bale paart mai hi operation karana hai 
        else{
            high = mid-1;
            ans = min(ans,nums[mid]);
            
        }
       } 
       return ans;
    }
    
};