//
//  MultipleChoiceQuestion.h
//  Quiz
//
//  Created by Aniket Sedhai on 7/7/24.
//

#ifndef MultipleChoiceQuestion_h
#define MultipleChoiceQuestion_h

#include "Question.h"
#include <vector>

class MultipleChoiceQuestion: public Question
{
public:
    MultipleChoiceQuestion(const std::string& questionText,
                           const std::vector <std::string>& AnswersVector,
                           const std::string& correctAnswer);

    virtual bool IsThisAnswerCorrect(const std::string& answer) override;
    
    virtual std::string GetPossibleAnswersText() override;
    
protected:
    
    std::vector <std::string> VectorContainingAnswers;
};

#endif /* MultipleChoiceQuestion_h */
