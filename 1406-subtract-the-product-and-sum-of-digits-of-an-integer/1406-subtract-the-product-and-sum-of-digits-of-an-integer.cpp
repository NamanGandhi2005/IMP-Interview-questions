class Solution {
public:
    int subtractProductAndSum(int n) {
        long long product=1;

        long long sum=0;

        while(n){
            int digit=n%10;

            product*=digit;

            sum+=digit;

            n=n/10;

        }


        return product-sum;


    }
};