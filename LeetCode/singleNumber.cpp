int singleNumber(vector<int>& nums) {
    int a = 0;
    //Complete XOR with all elements to get non-duplicate
    for(int i : nums)
        a ^= i;
    return a;
}
