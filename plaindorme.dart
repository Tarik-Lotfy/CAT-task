class Solution {
  bool isPalindrome(int x) {
    String xStr = x.toString();
    int j = xStr.length - 1;
    for (int i = 0; i < xStr.length / 2; i++) {
      if (xStr[i] != xStr[j]) {
        return false;
      }
      j--;
    }
    return true;
  }
}

void main() {
  Solution solution = Solution();
  print(solution.isPalindrome(121));
  print(solution.isPalindrome(10));
  print(solution.isPalindrome(-121));
}
