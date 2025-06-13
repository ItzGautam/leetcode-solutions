class Solution {
public:
    int maxProfit(vector<int>& prices) {
  int Bestday = prices[0];
  int MP =0;

   for (int i=1; i<prices.size(); i++) {

      Bestday = min(Bestday, prices[i]);
       MP = max(MP,prices[i] - Bestday);
   }
    return MP;
    }
};
