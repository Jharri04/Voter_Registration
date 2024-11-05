//
// Created by Jonah Harris on 9/27/24.
//

#ifndef VOTER_REGISTRATION_REPUBLICAN_VOTER_H
#define VOTER_REGISTRATION_REPUBLICAN_VOTER_H
#include "Voter.h"

class Republican_Voter : public Voter {
public:
    // Default Constructor
    Republican_Voter();

    // Parameterized constructor
    Republican_Voter(const Voter& baseVoter);

    // Overridden voter method
    void showVoterData() const override;

    // Class specific overridden voter method
    void showRepublicanVoterData() const override;
};

#endif //VOTER_REGISTRATION_REPUBLICAN_VOTER_H
