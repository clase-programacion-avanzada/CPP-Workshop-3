#ifndef MATCH_H
#define MATCH_H

#include <string>
#include <sstream>
#include "List.h"
#include "TextFileHandler.h"

using namespace std;

struct Match {
    string localTeam;
    int scoreLocalTeam;
    string visitingTeam;
    int scoreVisitingTeam;

    int getPointsForLocalTeam() {

        if(scoreLocalTeam > scoreVisitingTeam){
            return 5;
        }
        if(scoreLocalTeam < scoreVisitingTeam){
            return 0;
        }
        if(scoreLocalTeam == 0 && scoreVisitingTeam == 0){
            return 1;
        }
        return 3;
    }

    int getPointsForVisitingTeam() {

        return 0;
    }
};

Match getMatchFromLine(string line, char delimiter) {
        Match match;
        
        
        return match;
}

string getLineFromMatch(Match match, char delimiter) {
    string line;
    
    return line;
}


     

#endif /* MATCH_H */