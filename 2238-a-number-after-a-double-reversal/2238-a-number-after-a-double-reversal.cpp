class Solution {
public:
    bool isSameAfterReversals(int num) {
        //reverse then reverse
        int reverse=0;
        int temp=num;

        while(num){
            int digit=num%10;

            reverse=(reverse*10)+digit;
            num=num/10;
        }
        int ans1=reverse;
        int reverseSecond=0;

        while(reverse){
            int digit=reverse%10;

            reverseSecond=(reverseSecond*10)+digit;
            reverse=reverse/10;

        }
        cout<<ans1<<endl;
        cout<<reverseSecond;

        if(temp==reverseSecond){
            return true;
        }
        return false;
    }
};