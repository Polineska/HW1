#include <iostream>
#include <stack>
#include <vector>

long long largestRectangleArea(const std::vector<int>& heights) {
    int n = heights.size();
    std::stack<int> st;
    long long max_area = 0;

    for (int i = 0; i <= n; ++i) {
        while (!st.empty() && (i == n || heights[i] < heights[st.top()])) {
            int h = heights[st.top()];
            st.pop();
            int w = st.empty() ? i : i - st.top() - 1;
            max_area = std::max(max_area, static_cast<long long>(h) * w);
        }
        st.push(i);
    }

    return max_area;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> heights[i];
    }

    long long result = largestRectangleArea(heights);
    std::cout << result << std::endl;

    return 0;
}