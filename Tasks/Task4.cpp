
void get_amount_evnum(long long num, int &ans) {
    ans = 0;

    if (num / 10 > 0) {
        get_amount_evnum(num / 10, ans);
    }

    if ((num % 10) % 2 == 0)
        ans++;
}

void task4() {
    int ans;
    long long n;
    std::cout << "Enter a very long number:" << std::endl;
    std::cin >> n;
    get_amount_evnum(n, ans);
    std::cout << ans << std::endl;
}
