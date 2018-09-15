#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H

#include "Imovel.h"
#include <list>
#include "GerenciadorPersistencia.h"

class SistemaImobiliaria
{
    public:
        SistemaImobiliaria();
        virtual ~SistemaImobiliaria();
        void cadastrarImovel(Imovel *imovel);
        std::list<Imovel*> getImoveis();
        GerenciadorPersistencia getGerenciadorPersistencia();

    protected:

    private:
        std::list<Imovel*> lista;
        GerenciadorPersistencia gerenciador;
};

#endif // SISTEMAIMOBILIARIA_H
