class MedianFinder {
public:
    priority_queue<int> nums;
    priority_queue<int> sub;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        nums.push(num);
    }
    
    double findMedian() {
    int size=nums.size();
    int mid = size/2;
    int res1=0;
    int res2=0;
    int i =0;
    while(!nums.empty())
    {
        int front=nums.top();
        if(i==mid)
            res1=front;
        if(i==mid-1)
            res2=front;
        nums.pop();
        sub.push(front);
        i++;
    }
    while (!sub.empty())
    {
        nums.push(sub.top());
        sub.pop();
    }
    if(size % 2 != 0)
        return (double)res1;
    return (double)(res1+res2)/2;
    }
};