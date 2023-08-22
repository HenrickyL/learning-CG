```cpp
// Fast Downward
#include <iostream>
#include <fstream>
#include <vector>
#include <cassert>
#include "state.h"
#include "search.h"
#include "task_proxy.h"

using namespace std;
using namespace pddl_parser;
using namespace pddl_planner;

int main() {
    try {
        // Carregar os arquivos de dominio e problema
        ifstream domain_file("domain.pddl");
        ifstream problem_file("problem.pddl");

        if (!domain_file || !problem_file) {
            cerr << "Erro ao abrir os arquivos de especificacao PDDL." << endl;
            return 1;
        }

        // Criar uma instancia da tarefa PDDL
        shared_ptr<Domain> domain = make_shared<Domain>(domain_file);
        shared_ptr<Problem> problem = make_shared<Problem>(problem_file, domain);
        TaskProxy task(*domain, *problem);

        // Configurar o planejador Fast Downward
        SearchEngine engine(task, true); // true significa busca em forward
        engine.initialize();

        // Resolver o problema
        SearchStatus status = engine.search();

        if (status == SearchStatus::SOLVED) {
            // Obter o plano
            Plan plan = engine.get_plan();
            
            // Imprimir o plano
            cout << "Plano encontrado:" << endl;
            for (const auto& action : plan) {
                cout << "  " << action.get_name() << endl;
            }
        } else {
            cout << "Nao foi possivel encontrar uma solucao." << endl;
        }
    } catch (const exception& e) {
        cerr << "Erro: " << e.what() << endl;
        return 1;
    }

    return 0;
}

```

convert to:

```cpp
AIAgent ai;

PDDLDomain domain;
domain.LoadFromFile("domain.pddl");

PDDLProblem problem;
problem.LoadFromFile("problem.pddl");

ai.SetDomain(domain);
ai.SetProblem(problem);

if (ai.Plan()) {
    PDDLPlan plan = ai.GetPlan();
    for (const auto& action : plan.GetActions()) {
        // Executar acao na aplicacao
    }
} else {
    // Nao foi possivel encontrar um plano
}
```
