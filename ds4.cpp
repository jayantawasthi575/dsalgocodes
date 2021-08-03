int convertFive(int n) {
    int temp=0;
    while(n!=0)
    {
        int m=n%10;
        if(m==0)
        {
        m=5;
        temp=temp*10+m;
        }
        else
        {
            temp=temp*10+m;
        }
        n=n/10;
    }
    n=temp;
    temp=0;
    while(n!=0)
    {
        int m=n%10;
        temp=temp*10+m;
        n=n/10;
    }
    return temp;
}

int convert0To5Rec(int num) {
    // Base case for recursion termination
    if (num == 0) return 0;

    // Extract the last digit and change it if needed
    int digit = num % 10;
    if (digit == 0) digit = 5;

    // Convert remaining digits and append the last digit
    return convert0To5Rec(num / 10) * 10 + digit;
}

// It handles 0 and calls convert0To5Rec() for other numbers
int convertFive(int num) {
    if (num == 0)
        return 5;
    else
        return convert0To5Rec(num);
}
