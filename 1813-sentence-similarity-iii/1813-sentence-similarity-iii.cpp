class Solution {
    // Helper function to split sentence into words
    vector<string> getWords(string str){
        vector<string> words;
        int i = 0;
        while(i < str.length()){
            string temp;
            while(i < str.length() && str[i] != ' '){
                temp += str[i++];
            }
            words.push_back(temp);
            i++;
        }
        return words;
    }
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        int s1 = sentence1.length();
        int s2 = sentence2.length();
        
        // If both sentences are exactly the same
        if(sentence1 == sentence2) return true;
        
        // Split the sentences into words
        vector<string> largeSenArr;
        vector<string> smallSenArr;
        if(s1 < s2){
            largeSenArr = getWords(sentence2);
            smallSenArr = getWords(sentence1);
        } else {
            largeSenArr = getWords(sentence1);
            smallSenArr = getWords(sentence2);
        }
        
        int i = 0, j = smallSenArr.size() - 1;
        int k = 0, l = largeSenArr.size() - 1;
        
        // Two-pointer approach to match from both ends
        while(i <= j){
            if(largeSenArr[k] == smallSenArr[i]){
                k++;
                i++;
            } else if(largeSenArr[l] == smallSenArr[j]){
                l--;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
};