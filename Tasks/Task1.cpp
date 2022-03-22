
void swap(int &a, int &b) {
    int buf = a;
    a = b;
    b = buf;
}

void swapvec(std::vector<int> &vec, int *arr) {
    for (int i = 0; i < 5; i++) {
        swap(vec[i], *(arr + i));
    }
}

void task1() {
    std::vector<int> v = {1, 2 ,3 , 4, 5};
    int arr[] = {6, 7, 8, 9, 10};
    swapvec(v, arr);

    for (int i = 0; i < 5; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}
