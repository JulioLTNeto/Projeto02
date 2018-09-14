#include "GerenciadorPersistencia.h"
#include <fstream>

GerenciadorPersistencia::GerenciadorPersistencia()
{
    //ctor
}

void GerenciadorPersistencia::salvarImovel(Imovel *imovel){
    std::ofstream arq;
    arq.open("imovel.txt", std::ios::app);
    arq <<imovel->getDescricao() << "\n";
    arq<<imovel->getEndereco().getBairro() << "\n";
    arq<<imovel->getEndereco().getCep() << "\n";
    arq<<imovel->getEndereco().getCidade() << "\n";
    arq<<imovel->getEndereco().getLogradouro() << "\n";
    arq<<imovel->getEndereco().getNumero() << "\n";
    arq<<imovel->getImovelTipo() << "\n";
    arq<<imovel->getTipoDeferta() << "\n";
    arq<<imovel->getValor() << "\n";
    arq.close();
}

GerenciadorPersistencia::~GerenciadorPersistencia()
{
    //dtor
}
