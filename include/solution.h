#ifndef SOLUTION_H 
#define SOLUTION_H 
#include <string> 
#include <ctime>  

class Solution {
private:
    std::string approachName; 
    std::string code;         
    std::string complexity;   
    std::string notes;        
    bool isOptimal;           
    std::time_t dateSolved; 

public:

    Solution(const std::string& approach, const std::string& codeText,
             const std::string& comp, const std::string& noteText, bool optimal);

    std::string getApproachName() const;
    std::string getCode() const;
    std::string getComplexity() const;
    std::string getNotes() const;
    bool getIsOptimal() const;
    std::string getDateSolved() const;
};

#endif