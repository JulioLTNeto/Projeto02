#include "SistemaImobiliaria.h"
#include "fstream"

SistemaImobiliaria::SistemaImobiliaria()
{
    gerenciador = GerenciadorPersistencia();
}

GerenciadorPersistencia SistemaImobiliaria::getGerenciadorPersistencia(){
    return gerenciador;
}

void SistemaImobiliaria::cadastrarImovel(Imovel *imovel){

}

SistemaImobiliaria::~SistemaImobiliaria()
{
    //dtor
}
