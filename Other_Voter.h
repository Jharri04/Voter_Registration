//
// Created by Jonah Harris on 9/27/24.
//

#ifndef VOTER_REGISTRATION_OTHER_VOTER_H
#define VOTER_REGISTRATION_OTHER_VOTER_H


#include "Voter.h"

class Other_Voter : public Voter {
public:
    // Default Constructor
    Other_Voter();

    // Parameterized constructor
    Other_Voter(const Voter& baseVoter);

    // Overridden voter method
    void showVoterData() const override;

    // Class specific overridden voter method
    void showOtherVoterData() const override;
};


#endif //VOTER_REGISTRATION_OTHER_VOTER_H
