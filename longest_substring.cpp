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
       int temp[200] = {0},start = 0, max_length= 0;;
        for (int i = 0; i < s.length(); i++)
        {
            while (temp[s[i]] > 0)
                temp[s[start++]] = 0;   
                
            temp[s[i]]++;
            max_length =max(max_length, i - start + 1);
        }
        return max_length;
    }
    


};

int main()
{
    string st ="\0";
    Solution s;
	cout<<" write a string to find substring  -> ";
	cin>>st;
   cout<< s.lengthOfLongestSubstring(st);



	return 494;

}
