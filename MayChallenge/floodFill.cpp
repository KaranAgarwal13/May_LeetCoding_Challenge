void DFS(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor)
{
	//sentinels
	if(sr>=0 && sc>=0 && sr<image.size() && sc<image[0].size() && image[sr][sc]==oldColor)
	{
		image[sr][sc]=newColor;
        DFS(image, sr, sc+1, newColor, oldColor);
        DFS(image, sr+1, sc, newColor, oldColor);
        DFS(image, sr, sc-1, newColor, oldColor);
        DFS(image, sr-1, sc, newColor, oldColor);            
    }
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
{
    if(newColor!=image[sr][sc])
        DFS(image, sr, sc, newColor, image[sr][sc]);
    return image;
}
