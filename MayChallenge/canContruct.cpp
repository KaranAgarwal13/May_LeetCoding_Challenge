bool canConstruct(string ransomNote, string magazine) {
	int a[magazine.length()];
    for(int i = 0; i < magazine.length(); i++)
        a[i]=0;
    for(int i = 0; i < ransomNote.length(); i++)
    {
        //ransomNote[i]
        int j = 0;
        while(j<magazine.length())
        {
            if(a[j]==0 && magazine[j]==ransomNote[i])
            {
                a[j]++;
                break;
            }
            j++;
        }
        if(j<magazine.length() && a[j]==1 && magazine[j]==ransomNote[i])
            continue;
        else
            return false;
    }
    return true;
}
