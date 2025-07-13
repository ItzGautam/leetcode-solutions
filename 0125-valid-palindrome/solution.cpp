class Solution {
public:

    bool IsNumeric(char i) {
         if((i>='0') && (i<='9') || 
           (tolower(i) >= 'a' && tolower(i) <= 'z' )) {
            return true;
           }
           return false;
    }

    bool isPalindrome(string s) {
        int st =0; int end = s.length()-1;

        while(st<end) {
          if(!IsNumeric(s[st])) {
            st++; continue;
          }
          if(!IsNumeric(s[end])) {
            end--; continue;
          }

          if(tolower(s[st]) != tolower(s[end])) return false;
         st++;  end--;
        }
         return true;
    }
};
