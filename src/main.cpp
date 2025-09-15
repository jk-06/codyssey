#include <iostream>
#include "problem.h"
#include "solution.h"

int main() {
    std::cout << "🧪 Testing Problem and Solution classes..." << std::endl;
    
    Solution bruteForceSolution(
        "Brute Force",
        "class Solution { /* code here */ };",
        "O(n²) time, O(1) space",
        "Simple but inefficient first approach",
        false
    );
    
    std::vector<std::string> tags = {"Array", "Hash Table"};
    Problem twoSum("Two Sum", "Easy", tags);
    
    twoSum.addSolution(bruteForceSolution);

    std::cout << "Problem: " << twoSum.getName() << std::endl;
    std::cout << "Difficulty: " << twoSum.getDifficulty() << std::endl;
    std::cout << "Number of solutions: " << twoSum.getSolutions().size() << std::endl;
    std::cout << "First solution approach: " << twoSum.getSolutions()[0].getApproachName() << std::endl;
    
    std::cout << "All tests passed!" << std::endl;
    return 0;
}