#ifndef UTIL_H
#define UTIL_H

#include "Imovel.h"
#include <string>

class Util
{
    public:
        Util();
        virtual ~Util();

        int cadastrarImovel(Imovel imovel);
        Imovel[] listarImovel();
        Imovel[] listarPorTipo(int tipo);
        Imovel[] listarPorCategoria(int categoria);
        Imovel[] buscarImovel(int filtro, std::string pesquisa);
        Imovel[] buscarPorValor(int filtro, float valor1, float valor2);
        int atualizarImovel(Imovel imovel[]);
        int deletarImovel(int posicao);

    protected:

    private:
};

#endif // UTIL_H
