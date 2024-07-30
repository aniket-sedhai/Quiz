//
//  TrueFalseQuestion.h
//  Quiz
//
//  Created by Aniket Sedhai on 7/8/24.
//

#ifndef TrueFalseQuestion_h
#define TrueFalseQuestion_h

#include "MultipleChoiceQuestion.h"

class TrueFalseQuestion: public MultipleChoiceQuestion
{
public:
    TrueFalseQuestion(const std::string& questionText,
                      const std::string& correctAnswer);
    
    virtual bool IsThisAnswerCorrect(const std::string& answer) override;
};


#endif /* TrueFalseQuestion_h */
