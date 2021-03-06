#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"
#include <string>
#include <sstream>

class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();

        void setImovelTipo(int escolha);
        void setValor(double valor);
        void setTipoOferta(int tipoDeOferta);
        void setEndereco(Endereco endereco);

        int getImovelTipo();
        double getValor();
        int getTipoDeferta();
        Endereco getEndereco();
        std::string getDescricao();

    protected:
        int imovelTipo;
        double valor;
        int tipoDeOferta;
        Endereco endereco;

    private:
};

#endif // IMOVEL_H
