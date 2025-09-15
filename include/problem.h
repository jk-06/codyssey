#ifndef PROBLEM_H
#define PROBLEM_H

#include <string>
#include <vector>
#include "solution.h" 

class Problem {
private:
    std::string name;
    std::string difficulty;
    std::vector<std::string> tags;
    std::vector<Solution> solutions;
    std::string reflectionNotes; 

public:
    Problem(const std::string& name, const std::string& diff, 
            const std::vector<std::string>& problemTags);

    void addSolution(const Solution& solution);
    
    void setReflectionNotes(const std::string& notes);

    std::string getName() const;
    std::string getDifficulty() const;
    std::vector<std::string> getTags() const;
    std::vector<Solution> getSolutions() const;
    std::string getReflectionNotes() const;
};

#endif 