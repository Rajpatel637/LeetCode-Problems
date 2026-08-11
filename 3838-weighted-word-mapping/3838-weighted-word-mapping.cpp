class Solution {

private:
    
    int getCharIndex(vector<string>& words, vector<int>& weights,int index){
         int size = words[index].length();
         int sum = 0;
        for(int i = 0; i < size;i++){
            int w = weights[words[index][i] - 'a'];
            sum += w;
        }

        return sum % 26;
    }

public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        

        int size = words.size();
        string str = "";

        for(int i = 0; i < size;i++){
           int weight = getCharIndex(words,weights,i);
        
           char ch = 'z' - weight;

           str.push_back(ch);
        }

        return str;
    }
};