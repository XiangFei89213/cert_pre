int value(char c){
    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
int romanToInt(char* s) {

    int n = strlen(s);
    int sum = 0, prev = 0;
    for (int i = n - 1; i >= 0; i--) {
        int curr = value(s[i]);
        if (curr < prev) sum -= curr;
        else             sum += curr;
        prev = curr;
    }


    return sum;
}
