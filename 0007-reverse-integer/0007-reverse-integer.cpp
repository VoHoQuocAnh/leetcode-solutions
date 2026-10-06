class Solution {
public:
    int reverse(int x) {
        long long y = x;
        string s = to_string(y < 0 ? -y : y);
        std::reverse(s.begin(), s.end());
        long long res = stoll(s) * (x < 0 ? -1 : 1);
        return (res < INT_MIN || res > INT_MAX) ? 0 : (int)res;
    }
};