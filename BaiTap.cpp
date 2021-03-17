// Cau 1:
void reverse(char* s) {
    int x = strlen(s);
    int dem = 0;
    for (char* i = s;i < (s + x / 2);i++) {
        char t = *i;
        *(i) = *(i + x - dem - 1);
        *(i + x - dem - 1) = t;
        dem += 2;
    }
  
}

// Cau 2:
void rFilter(char* s) {
    int size = strlen(s);
    for (char* i = s + size - 1;i >= s;i--) {
        if ((*i >= 'a' && *i <= 'z') || (*i >= 'A' && *i <= 'Z')) break;
        else *i = '_';
    }
}

// Cau 17:
bool check(const int& n) {
    string k = to_string(n);
    for (auto& c : k) {
        if (c == '0' || n % (c - '0')) return false;
    }
    return true;
}
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* result = new int[right - left + 1];
    int dem = 0;
    for (int i = left;i <= right;i++) {
        if (check(i)) {
            result[dem] = i;
            dem++;
        }
    }
    *returnSize = dem;
    return result;
}