
int jump_rabbit(int n) {
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    return jump_rabbit(n - 1) + jump_rabbit(n - 2) + jump_rabbit(n - 3);
}

void task2() {
    std::cout << "Enter the number of the step:";
    int n;
    std::cin >> n;
    std::cout << "There are: " << jump_rabbit(n) << " ways" << std::endl;
}
