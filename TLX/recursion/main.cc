// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

void print(int start, int end) {
    if (start >=  end) return;
        std::cout << ("Nishidh") << std::endl;
        print(start + 1, end);
}

void linear_print(int start, int end) {
    if (start >  end) return;
        std::cout << start << std::endl;
        linear_print(start + 1, end);
}

void back_print(int start, int end) {
    if (start <  1) return;
        std::cout << start << std::endl;
        back_print(start - 1, end);
}

void back_trackprint(int start, int end) {
    if (start <  1) return;
        back_trackprint(start - 1, end);
        std::cout << start << std::endl;
}

void back_trackprintrev(int start, int end) {
    if (start > end) return;
        back_trackprintrev(start + 1, end);
        std::cout << start << std::endl;
}


void sum_lft(int start, int sum) {
    if (start < 1) {
        std::cout << (sum);
        return;
    }
    sum_lft(start - 1, sum + start);
}

int sum(int n) {
    if (n < 1) return 0;
    return n + sum(n - 1);
}

// void rev(int left, int arr[], int right) {
//     if (left >= right/2) return;
//     std::swap(arr[left], arr[right - left - 1]);
//     rev(left + 1,arr,  right);
// }

// void rev(int left, int arr[], int right) {
//     if (left >= right) return;
//     std::swap(arr[left], arr[right]);
//     rev(left + 1, arr, right - 1);
// }

void rev(int left, int arr[], int right) {
    if (left >= right) return;
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    rev(left + 1, arr, right - 1);
}


void revstr(int left, char str[], int right) {
    if (left >= right) return;
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;
    revstr(left + 1, str, right - 1);
}

bool palin(int start, std::string str) {
    if (start >= str.size()/2) return true;
    if (str[start] != str[str.size() - 1 - start]) {
        return false;
    }
    return palin(start + 1, str);
}

void printarray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    // int arr[5] = {1, 2, 3, 4, 2};
    // rev(0, arr, 4);
    std::string n = "Nan";
    std::cout << n.size() << std::endl;
    std::cout << palin(0, "Nan");
    return 0;
}