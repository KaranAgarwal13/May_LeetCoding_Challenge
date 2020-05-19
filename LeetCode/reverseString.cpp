void reverseString(vector<char>& s) {
    int i = 0, j = s.size()-1;
    for(; i<j; i++, j--)
    {
        char a = s[i];
        s[i] = s[j];
        s[j] = a;
    }
}
