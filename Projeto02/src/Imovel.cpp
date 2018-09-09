#include "Imovel.h"
#include "Apartamento.h"

Imovel::Imovel()
{
   tipoDeOferta = 0;
   imovelTipo = 0;
   valor = 0;

}

void Imovel::setImovelTipo(int escolha){
    this->imovelTipo = escolha;
}

void Imovel::setValor(double valor){
    this->valor = valor;
}

void Imovel::setTipoOferta(int tipoDeOferta){
    this->tipoDeOferta = tipoDeOferta;
}

void Imovel::setEndereco(Endereco endereco){
    this->endereco = endereco;
}

int Imovel::getImovelTipo(){
    return imovelTipo;
}

double Imovel::getValor(){
    return valor;
}

int Imovel::getTipoDeferta(){
    return tipoDeOferta;
}

Endereco Imovel::getEndereco(){
    return endereco;
}

std::string Imovel::getDescricao(){
    if(tipoDeOferta == 1){
        Apartamento apt = Apartamento();
        std::stringstream areaSt;
        areaSt<<apt.getArea();
        std::stringstream numQuartos;
        numQuartos<<apt.getNumDeQuartos();
        std::stringstream vagasGaragem;
        vagasGaragem<<apt.getVagasGaragem();
        std::stringstream valorCondominio;
        valorCondominio<<apt.getValorCondominio();
        std::string retorno = "" + areaSt.str() + "\n" + numQuartos.str() + "\n" + vagasGaragem.str() + "\n" + valorCondominio.str();
        return retorno;
    }
    return "";
}

Imovel::~Imovel()
{
    //dtor
}
