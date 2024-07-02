class Solution {
public:
    int romanToInt(string s) {
        // 로마 숫자의 각 문자를 정수로 매핑합니다.
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int total = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            // 현재 문자와 다음 문자를 비교합니다.
            if (i < n - 1 && roman[s[i]] < roman[s[i + 1]]) {
                // 현재 문자가 다음 문자보다 작으면 빼기 연산을 합니다.
                total -= roman[s[i]];
            } else {
                // 그렇지 않으면 더하기 연산을 합니다.
                total += roman[s[i]];
            }
        }
        
        return total;
    }
};