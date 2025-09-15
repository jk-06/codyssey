#include "solution.h" 
#include <iostream>
#include <ctime>

Solution::Solution(const std::string& approach, const std::string& codeText,
                   const std::string& comp, const std::string& noteText, bool optimal)
    : approachName(approach), code(codeText), complexity(comp),
      notes(noteText), isOptimal(optimal) {
    dateSolved = std::time(0);
}

std::string Solution::getApproachName() const { return approachName; }
std::string Solution::getCode() const { return code; }
std::string Solution::getComplexity() const { return complexity; }
std::string Solution::getNotes() const { return notes; }
bool Solution::getIsOptimal() const { return isOptimal; }

std::string Solution::getDateSolved() const {
    char buffer[100];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&dateSolved));
    return std::string(buffer);
}