#ifndef AI_AGENT_H
#define AI_AGENT_H

//#include "PDDLDomain.h"
//#include "PDDLProblem.h"
//#include "PDDLPlanner.h"
//#include "PDDLPlan.h"

class AIAgent {
private:
    //PDDLDomain* domain;
    /*PDDLProblem problem;
    PDDLPlanner planner;
    PDDLPlan plan;*/
public:
    AIAgent();

    //void SetDomain(const PDDLDomain& newDomain);
    //void SetProblem(const PDDLProblem& newProblem);

    //bool Plan();
    //PDDLPlan GetPlan() const;
    
    //--------------------------------
    bool Resolve();

};
#endif