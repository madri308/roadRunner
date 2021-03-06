//
// Created by emema on 7/27/2020.
//

#ifndef ROADRUNNER_MATROID_H
#define ROADRUNNER_MATROID_H

#include "Configuration.h"
#include "GeneticAlgorithm.h"
#include <vector>

class Matroid:public iConstants {
public:
    Matroid();
    std::vector<Configuration*> configurationsList;
    GeneticAlgorithm *bestGeneticAlgorithm{};
    void compareWithBestGA(GeneticAlgorithm *geneticAlgorithm);
    void fillConfigurationsList();//voraz
    void showConfigurationList();
    void getBestConfiguration();
};


#endif //ROADRUNNER_MATROID_H
