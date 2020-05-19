bool isPerfectSquare(int num)
{
    double start = 1, end = num;
    if(start == end) return true;
    while(start<=end)
    {
       double mid = (int)((start+end)/2);
       double m = mid*mid;
       cout<<mid<<" "<<m<<endl;
       if(m == num) return true;
       if(m < num)
          start = mid + 1;
       else 
          end = mid - 1;
    }
    return false;
}
