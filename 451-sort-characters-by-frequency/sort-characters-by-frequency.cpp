class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Step 1: Count frequency of each character
        for (char ch : s) {
            freq[ch]++;
        }

        // Step 2: Push (char, freq) pairs into a max-heap
        priority_queue<pair<int, char>> maxHeap;
        for (auto [ch, count] : freq) {
            maxHeap.push({count, ch});
        }

        // Step 3: Build result string by popping from heap
        string result = "";
        while (!maxHeap.empty()) {
            auto [count, ch] = maxHeap.top();
            maxHeap.pop();
            result += string(count, ch); // Repeat char 'count' times
        }

        return result;
    }
};