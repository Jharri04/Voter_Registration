//
// Created by Jonah Harris on 9/27/24.
//

#ifndef VOTER_REGISTRATION_DEMOCRATIC_VOTER_H
#define VOTER_REGISTRATION_DEMOCRATIC_VOTER_H

#include "Voter.h"

class Democratic_Voter : public Voter {
public:
    // Default Constructor
    Democratic_Voter();

    // Parameterized Constructor
    Democratic_Voter(const Voter& baseVoter);

    // Overridden voter method
    void showVoterData() const override;

    // Class specific overridden voter method
    void showDemocraticVoterData() const override;

};


#endif //VOTER_REGISTRATION_DEMOCRATIC_VOTER_H
