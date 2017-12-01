class Solution {
public:
    int ori;
    void floodFill2(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(sr<0||sr>=image.size()||sc<0||sc>=image[0].size()||image[sr][sc]!=ori)
            return;
        image[sr][sc]=newColor;
        floodFill2(image,sr+1,sc,newColor);
        floodFill2(image,sr-1,sc,newColor);
        floodFill2(image,sr,sc+1,newColor);
        floodFill2(image,sr,sc-1,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor) return image;
        ori=image[sr][sc];
        floodFill2(image,sr,sc,newColor);
        return image;
    }
};
