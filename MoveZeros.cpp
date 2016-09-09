#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        
        if (nums[i] != 0) {

        nums[j] = nums[i];
        j++;

        }
        
    }
    for (;j < nums.size(); j++) {
        nums[j] = 0;
    }

}

int main(int argc,char* argv[]){
    
    vector<int> vec(argc-1);
    for (int i=0; i<vec.size(); i++) {
        vec[i]=atoi(argv[i+1]);
    }
    
    moveZeroes(vec);
    
    for (int i=0; i<vec.size(); i++) {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
