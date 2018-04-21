
#include<vector>
#include<iostream>

int main(){
    std::vector<int> nums{11,32,2,61,9};
    auto result = std::find_if(nums.begin(), nums.end(), [](int elem){ return 0 < elem && elem < 10;});
    if(result != nums.end()){
        std::cout << "第一个大于0小于10的数: " << *result << ",位于:" << (result - nums.begin()) << std::endl;
    }
    return 0;
}