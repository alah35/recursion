
int jump_rabbit2(int n, int k = 3) {
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    int sum = 0;
    for (int i = 1; i <= k; i++) {
        sum += jump_rabbit2(n - i, k);
    }
    return sum;
}

void task3() {
    std::cout << "Enter the step number:";
    int n;
    std::cin >> n;
    std::cout << "Enter the jump length:";
    int k;
    std::cin >> k;

    std::cout << "There are: " << jump_rabbit2(n, k) << " ways" << std::endl;
}
