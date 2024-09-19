class Solution {
public:
    map<char, function<int(int, int)>> operations = {
        {'+', [](int x, int y) { return x + y; }},
        {'-', [](int x, int y) { return x - y; }},
        {'*', [](int x, int y) { return x * y; }}
    };

    vector<int> diffWaysToCompute(string expression) {
        vector<int> res;
        
        for (int i = 0; i < expression.length(); ++i) {
            char op = expression[i];
            
            if (operations.find(op) != operations.end()) {
                vector<int> nums1 = diffWaysToCompute(expression.substr(0, i));
                vector<int> nums2 = diffWaysToCompute(expression.substr(i + 1));
                
                for (int n1 : nums1) {
                    for (int n2 : nums2) {
                        res.push_back(operations[op](n1, n2));
                    }
                }
            }
        }
        
        if (res.empty()) {
            res.push_back(stoi(expression));
        }
        
        return res;
    }
};
