#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Imovel.h"

class Apartamento : public Imovel
{
    public:
        Apartamento();
        virtual ~Apartamento();

        void setPosicao(std::string posicao);
        void setNumDeQuartos(int numDeQuartos);
        void setValorCondominio(double valorCondominio);
        void setVagasGaragen(int vagasGaragem);
        void setArea(double area);

        std::string getPosicao();
        int getNumDeQuartos();
        double getValorCondominio();
        int getVagasGaragem();
        double getArea();

    protected:

    private:
        std::string posicao;
        int numDeQuartos;
        double valorCondominio;
        int vagasGaragem;
        double area;

};
#endif // APARTAMENTO_H
