// problem link https://leetcode.com/problems/min-stack/

class MinStack {
    private:
     long *arr;
     long minele;
     long peak;
public:
    MinStack() {
        long size = 30000;
        arr = new long[size];
        minele=INT_MAX;
        peak=-1; 
    }
    
    void push( long val) {
        if(peak==-1){
            minele = val;
            peak++;
            arr[peak] = val;
        }
        else{
            if(val<minele){
                peak++;
                arr[peak] = 2*val -minele;
                minele = val;
            }
            else{
                peak++;
                arr[peak] = val;
            }
        }
        
    }
    
    void pop() {
        if(peak==-1){
            return;
        }
        else{
            if(arr[peak]<minele){
                minele = 2*minele - arr[peak];
                arr[peak]=0;
                peak--;
            }
            else{
                arr[peak]=0;
                peak--;
            }
        }
    }
    
    int top() {
       if(peak==-1){
           return -1;
       }
        else{
            if(arr[peak] < minele){
                return minele;
            }
            return arr[peak];
        }
    }
    
    int getMin() {
        return minele;
    }
};