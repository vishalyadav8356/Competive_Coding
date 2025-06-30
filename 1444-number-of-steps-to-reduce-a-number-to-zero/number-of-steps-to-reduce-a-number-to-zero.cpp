class Solution {
public:
    int go(int num){
        if(num == 0) return 0;
        if(num%2 == 0) return 1+go(num/2);
        return 1+go(num-1);
    } 
    int numberOfSteps(int num) {
        return go(num);
        // int step = 0;
        // while(num>0){
        // if(num%2 == 0){
        //     num/=2;
        // }
        // else{
        //     num-=1; 
        // }
        // step++;
        // }
        // return step;


        //By recusrion
        
    }
};