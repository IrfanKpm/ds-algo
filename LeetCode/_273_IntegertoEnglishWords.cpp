#include <string>
#include <map>
#include <vector>

using namespace std;

class Solution {
private:
    map<int, string> ones = {
        {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    map<int, string> below_20 = {
        {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"},
        {10, "Ten"}, {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"},
        {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"}
    };

    vector<string> tens = {
        "Twenty", "Thirty", "Forty", "Fifty", 
        "Sixty", "Seventy", "Eighty", "Ninety"
    };

    string convertBelow1000(int num) {
        string result;
        if (num >= 100) {
            result += ones[num / 100] + " Hundred";
            num %= 100;
            if (num > 0) result += " ";
        }
        if (num >= 20) {
            result += tens[num / 10 - 2];
            num %= 10;
            if (num > 0) result += " " + ones[num];
        } else if (num > 0) {
            result += below_20[num];
        }
        return result;
    }

public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";

        string result;

        if (num >= 1000000000) {
            result += convertBelow1000(num / 1000000000) + " Billion";
            num %= 1000000000;
            if (num > 0) result += " ";
        }

        if (num >= 1000000) {
            result += convertBelow1000(num / 1000000) + " Million";
            num %= 1000000;
            if (num > 0) result += " ";
        }

        if (num >= 1000) {
            result += convertBelow1000(num / 1000) + " Thousand";
            num %= 1000;
            if (num > 0) result += " ";
        }

        if (num > 0) {
            result += convertBelow1000(num);
        }

        return result;
    }
};
