#include<iostream>
#include<string>

using namespace std;

class Solution {
public:

    Solution()
    {
        cout << "default" << endl;
    }
    int lengthOfLongestSubstring(string s)
    {
        string temp1, temp2 = "\0";
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < temp1.size(); j++)
                if (temp1[j] == s[i])
                 if (temp1.size() >= temp2.size())
                 {
                        // temp1.erase(temp1.end() - 1);
                        temp2 = temp1;
                        temp1 = "\0";
                        //temp1 = temp1 + s[i];

                 }
            
            temp1 = temp1 + s[i];

        }
        return temp2.length();
    }


};

int main()
{
    string st ="pwwkew";
    Solution s;
   cout<< s.lengthOfLongestSubstring(st);



	return 494;

}