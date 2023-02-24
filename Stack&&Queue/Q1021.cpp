/*https://leetcode.com/problems/remove-outermost-parentheses/description/*/
class Solution{
public:
    string removeOuterParentheses(string s)
    {

        int count = 0;
        string result = "";
        for (char a : s)
        {
            if (a == '(' && count == 0)
                count++;

            else if (a == '(' && count >= 1){
                count++;
                result += a;
            }
            else if (a == ')' && count > 1){
                count--;
                result += a;
            }
            else if (a == ')' && count == 1)
                count--;
        }

        /*returning the result*/
        return result;
    }
};