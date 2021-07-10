class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        int j=expression.size();
        vector<int> result;
        for(int k=0;k<j;k++){
          if(expression[k]=='+' || expression[k]=='-' || expression[k]=='*') {
				vector<int> left = diffWaysToCompute(expression.substr(0,k));
				vector<int> right = diffWaysToCompute(expression.substr(k+1));
				for (auto l : left) {
					for (auto r : right) {
						switch(expression[k]) {
                            case '+': result.push_back(l + r); break;
                            case '-': result.push_back(l - r); break;
                            case '*': result.push_back(l*r); break;
                        }
					}
				}
			}
        }
        if(result.empty()) result.push_back(stoi(expression));
        return result;
    }
};