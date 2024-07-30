//
//  MultipleChoiceQuestion.cpp
//  Quiz
//
//  Created by Aniket Sedhai on 7/7/24.
//

#include "MultipleChoiceQuestion.h"
#include <sstream>

MultipleChoiceQuestion::MultipleChoiceQuestion(const std::string& questionText,
                                               const std::vector <std::string>& AnswersVector,
                                               const std::string& correctAnswer)
    : Question(questionText, correctAnswer),
      VectorContainingAnswers(AnswersVector)
{
    // Nothing here...
}

bool MultipleChoiceQuestion::IsThisAnswerCorrect(const std::string& answer)
{
    int user_answer_int;
    int correct_answer_int = std::stoi(CorrectAnswer);
    
    try
    {
        user_answer_int = std::stoi(answer);
    }
    catch (std::exception& e)
    {
        return answer == VectorContainingAnswers.at(correct_answer_int - 1);
    }
    
    return user_answer_int == correct_answer_int;
}

std::string MultipleChoiceQuestion::GetPossibleAnswersText()
{
    std::string AllAnswers;
    
    for (int i = 0; i < VectorContainingAnswers.size(); ++i)
    {
        std::ostringstream oss;
        oss << (i+1) << ")" << VectorContainingAnswers[i] << std::endl;
        AllAnswers += oss.str();
    }
    
    return AllAnswers;
}
