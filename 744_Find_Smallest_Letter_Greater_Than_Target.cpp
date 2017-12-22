class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(target>=letters[letters.size()-1])
            return letters[0];
        else
        {
            for(char c:letters)
                if(c>target) return c;
        }
 //       return letters[0];
    }
};
