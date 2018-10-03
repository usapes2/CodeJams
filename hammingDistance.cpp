class Solution {
public:
    int hammingDistance(int x, int y) {
        int counter = 0 ;
       while( (x > y ? x : y) > 0 ) {
           if ( x % 2 != y % 2){ counter ++;}
           x = floor(x/2);
           y = floor(y/2);
       }
        return counter;
    }
};