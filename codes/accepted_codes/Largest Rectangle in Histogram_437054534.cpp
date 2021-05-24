class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        std::stack<std::pair<int,int>> s;
        s.emplace(heights.size(), 0), heights.emplace_back(0);
        int max_{0};
        for(int i{0}, size{(int)heights.size()}; i < size; ++i) {
            int last{i};
            while(!s.empty() && s.top().second >= heights[i]) {
                auto [j, h]{s.top()};
                max_ = std::max(max_, (i-j)*h);
                last = j;
                s.pop();
            }
            s.emplace(last, heights[i]);
        }
        return max_;
    }
};
