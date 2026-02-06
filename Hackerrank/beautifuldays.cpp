int reverseNum(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int beautifulDays(int i, int j, int k) {
    int count = 0;

    for (int day = i; day <= j; day++) {
        int rev = reverseNum(day);
        int diff = abs(day - rev);

        if (diff % k == 0) {
            count++;
        }
    }
    return count;
}