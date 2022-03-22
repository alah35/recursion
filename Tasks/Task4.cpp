
void get_amount_evnum(long long num, int &ans) {
    ans = 0;
    if (num > 0)
        get_amount_evnum(num / 10, ans);

    if (num != 0 && (num % 10) % 2 == 0 )
        ans++;

}

void task4() {
    int ans;
    get_amount_evnum(9223372036854775806, ans);
    std::cout << ans << std::endl;
}
