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
    lista->push_back(imovel);
}

std::list<Imovel*> SistemaImobiliaria::getImoveis(){
    return lista;
}

SistemaImobiliaria::~SistemaImobiliaria()
{
    //dtor
}
