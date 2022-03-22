
void get_amount_evnum(long long num, int &ans) {

    if (num / 10 > 0)
        get_amount_evnum(num / 10, ans);

     ans += ((num % 10) % 2) == 0;
}

void task4() {
    int ans = 0;
    long long n;
    std::cout << "Enter a very long number:" << std::endl;
    std::cin >> n;
    get_amount_evnum(n, ans);
    std::cout << ans << std::endl;
}
