class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 0)
            return "";
        else if (strs.size() == 1)
            return strs[0];
        else
        {
            sort(strs.begin(), strs.end());
            int en = min(strs[0].size(),
                         strs[strs.size() - 1].size());

            string first = strs[0], last = strs[strs.size() - 1], res;
            int i = 0;
            while (i < en && first[i] == last[i])
            {
                res += first[i];
                i++;
            }
            return res;
        }
    }
};