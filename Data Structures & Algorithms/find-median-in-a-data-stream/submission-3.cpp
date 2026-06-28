class MedianFinder {
public:
    vector<int> nums;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        nums.push_back(num);
    }
    
    double findMedian() {
        sort(nums.begin(),nums.end());
        int mid= nums.size()/2;
        if(nums.size()%2==0)
            return (double)(nums[mid]+nums[mid-1])/2;

        return (double)nums[mid]; 

    }
};