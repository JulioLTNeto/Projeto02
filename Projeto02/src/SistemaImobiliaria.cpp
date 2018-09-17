#include "SistemaImobiliaria.h"
#include "fstream"

SistemaImobiliaria::SistemaImobiliaria()
{
    gerenciador = GerenciadorPersistencia();
    lista = gerenciador.recuperaListaImoveis();
}

GerenciadorPersistencia SistemaImobiliaria::getGerenciadorPersistencia(){
    return gerenciador;
}

void SistemaImobiliaria::cadastrarImovel(Imovel *imovel){
    lista.push_back(imovel);
}

std::list<std::string> SistemaImobiliaria::getDescricao(){
    std::list lis;
    for(Imovel *im:lista){
        std::string desc = "Este(a) ";
        if(im->getImovelTipo() == 1){
            desc = desc + " apartamento";
        }
        if(im->getImovelTipo() == 2){
            desc = desc + " casa";
        }
        if(im->getImovelTipo() == 3){
            desc = desc + " terreno";
        }
        desc = desc + " está locarizado no bairro: " + im->getEndereco().getBairro() + " e na cidade:" + im->getEndereco().getCidade();
    }
}

std::list<Imovel*> SistemaImobiliaria::getImoveis(){
    return lista;
}

SistemaImobiliaria::~SistemaImobiliaria()
{
    //dtor
}
