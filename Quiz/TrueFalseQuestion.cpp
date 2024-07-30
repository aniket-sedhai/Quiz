//
//  TrueFalseQuestion.cpp
//  Quiz
//
//  Created by Aniket Sedhai on 7/8/24.
//

#include "TrueFalseQuestion.h"

TrueFalseQuestion::TrueFalseQuestion(const std::string& questionText,
                                     const std::string& correctAnswer)
: MultipleChoiceQuestion(questionText, std::vector<std::string> {"True", "False"}, correctAnswer)
{
    // Nothing here...
}

bool TrueFalseQuestion::IsThisAnswerCorrect(const std::string& answer)
{
    int user_answer_int;
    
    try
    {
        user_answer_int = std::stoi(answer);
    }
    catch (std::exception& e)
    {
        return answer == CorrectAnswer;
    }
    
    return CorrectAnswer == VectorContainingAnswers.at(user_answer_int - 1);
}

