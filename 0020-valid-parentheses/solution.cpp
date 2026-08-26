class Solution {
public:
    bool isValid(string s) {

        stack<int>m;

        if(s.length() == 0) {
            return true;
        }
        

        for (int i =0; i<s.length(); i++) {

            if(!m.empty() && s[i] == ')') {
                if( m.top() =='(') {
                    m.push(s[i]);
                    m.pop();
                    m.pop();
                    continue;
                }   
            } else if(!m.empty() && s[i] == ']') {
                if( m.top() =='[') {
                    m.push(s[i]);
                    m.pop();
                    m.pop();
                    continue;
                }   
            } else if(!m.empty() && s[i] == '}') {
                if( m.top() =='{') {
                    m.push(s[i]);
                    m.pop();
                    m.pop();
                    continue;
                }   
            }

            m.push(s[i]);
        }

        if(m.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
