#ifndef GERENCIADORPERSISTENCIA_H
#define GERENCIADORPERSISTENCIA_H

#include "Imovel.h"

class GerenciadorPersistencia
{
    public:
        GerenciadorPersistencia();
        virtual ~GerenciadorPersistencia();
        void salvarImovel(Imovel *imovel);

    protected:

    private:
};

#endif // GERENCIADORPERSISTENCIA_H
