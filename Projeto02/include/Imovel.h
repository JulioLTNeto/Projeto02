#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"
#include <string>

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
        void setDescricao(std::string descricao);
        virtual void setDescricao()=0;
        virtual std::string getDescricao() = 0;

    protected:
        int imovelTipo;
        double valor;
        int tipoDeOferta;
        std::string descricao;
        Endereco endereco;

    private:
};

#endif // IMOVEL_H
