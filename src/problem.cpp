#include "problem.h"

Problem::Problem(const std::string& name, const std::string& diff, 
                 const std::vector<std::string>& problemTags)
    : name(name), difficulty(diff), tags(problemTags) {
}

void Problem::addSolution(const Solution& solution) {
    solutions.push_back(solution); 
}

void Problem::setReflectionNotes(const std::string& notes) {
    reflectionNotes = notes;
}

std::string Problem::getName() const { return name; }
std::string Problem::getDifficulty() const { return difficulty; }
std::vector<std::string> Problem::getTags() const { return tags; }
std::vector<Solution> Problem::getSolutions() const { return solutions; }
std::string Problem::getReflectionNotes() const { return reflectionNotes; }