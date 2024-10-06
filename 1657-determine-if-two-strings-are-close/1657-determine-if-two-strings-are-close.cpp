class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        unordered_map<char,int>map1;
        for(int i=0;i<word1.size();i++){
            map1[word1[i]]++;
        }

        unordered_map<char,int>map2;
        for(int i=0;i<word2.size();i++){
            map2[word2[i]]++;
        }
        for(auto ele : map2){
            if(map1.find(ele.first) != map1.end()){
                //map1.erase(ele.first);
            }
            else{
                return false;
            }
        }
        for(auto ele : map1){
            if(map2.find(ele.first) != map2.end()){
                //map2.erase(ele.first);
            }
            else{
                return false;
            }
        }
        vector<int>a;
        vector<int>b;
        for(auto ele : map1){
            a.push_back(ele.second);
        }
        for(auto ele : map2){
            b.push_back(ele.second);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    }
};