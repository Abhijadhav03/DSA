//palindrome
bool palindrome(int n)
{
    int revNum = 0;
    int dup = n;
    while (n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    } 
    if (dup == revNum) {    
        return true;
    } else {   
        return false;
    }
}

//gcd
int findGcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a; 
        }
    }
    if(a == 0) {
        return b;
    }
    return a;
}

//armstrong number

bool isArmstrong(int num) {
    int k = to_string(num).length();
    int sum = 0;
    int n = num;
    while(n > 0){
        int ld = n % 10;
        sum += pow(ld, k); 
        n = n / 10;
    }
    return sum == num ? true : false;
}


//print all divisors
vector<int> findDivisors(int n) {
    vector<int> divisors; 
    int sqrtN = sqrt(n); 
    for (int i = 1; i <= sqrtN; ++i) { 
        if (n % i == 0) { 
            divisors.push_back(i); 
            if (i != n / i) {
                divisors.push_back(n / i); 
            }
        }
    }
    return divisors; 
}

