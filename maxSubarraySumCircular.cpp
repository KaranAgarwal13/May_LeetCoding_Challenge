int maxSubarraySumCircular(vector<int>& A) {
	int currSum, maxSum, index = 0;
    currSum = maxSum = A[0];
    for(int i = 1; i < 2*A.size(); i++)
    {
        //stopping condition for circular array
        if(A[i%A.size()] > currSum+A[i%A.size()])
        {
            currSum = A[i%A.size()];
            index = i;
        }
        else
            currSum += A[i%A.size()];
        maxSum = (currSum > maxSum)? currSum : maxSum;
    }
    return maxSum;
}
