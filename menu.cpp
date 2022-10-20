#include <iostream>

int main() {
    std::string ingrediente_1;
    std::string ingrediente_2;

    std::cout << "* * * I N G R E D I E N T E S  * * * \n\n 1 - Arroz\n 2 - Feijão\n 3 - Tofu\n 5 - Batata\n 5 - Porco\n 6 - Frango\n 7 - Carapau" << std::endl;
    std::cout << "Informe qual o 1º igrediente do menu" << std::endl;
    std::cin  >> ingrediente_1;
    std::cout << "\nInforme qual o 1º igrediente do menu" << std::endl;
    std::cin  >> ingrediente_2;

    std::cout << "\n\n╔═════════╦══  MENUS DISPONÍVEIS ═════════════╗" << std::endl;

    if ((ingrediente_1 == "arroz") && (ingrediente_2 == "feijao")) {
        std::cout << "║    1    ║           ARROZ E FEIJÃO          ║" << std::endl;
    }
    if ((ingrediente_1 == "arroz") && (ingrediente_2 == "feijao")) {
        std::cout << "║    2    ║     ARROZ ou FEIJÃO  ou BATATA    ║" << std::endl;
    }
    if ((ingrediente_1 == "tofu" && (ingrediente_2 == "batata" || ingrediente_2 == "arroz")) ^ (ingrediente_2 == "tofu" && (ingrediente_1 == "batata" || ingrediente_1 == "arroz"))) {
        std::cout << "║    3    ║      TOFU e (BATATA OU ARROZ)     ║" << std::endl;
    }   
    if ((ingrediente_1 == "carapau" && ingrediente_2 == "feijao") ^ (ingrediente_1 == "feijao" && ingrediente_2 == "carapau")) {
        std::cout << "║    4    ║         CARAPAU e ARROZ           ║" << std::endl;
    }
    if ((ingrediente_1 == "batata" ^ ingrediente_2 == "tofu") || (ingrediente_1 == "tofu" ^ ingrediente_2 == "batata")) {
        std::cout << "║    5    ║          ou BATATA ou TOFU        ║" << std::endl;
    }

    if ((ingrediente_1== "frango" && ingrediente_2 == "arroz") || (ingrediente_1 == "arroz" && ingrediente_2 == "frango")) {
        std::cout << "║    6    ║            FRANGO e ARROZ         ║" << std::endl;        
    }
    if ((ingrediente_1 == "porco" || ingrediente_1 == "frango") || (ingrediente_2 == "frango" || ingrediente_2 == "porco")) {
        std::cout << "║    7    ║            PORCO ou FRANGO        ║" << std::endl;
    }
    
    
    std::cout << "╚═════════╩═══════════════════════════════════╝" << std::endl;

    return 0;

}