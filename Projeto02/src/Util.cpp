#include "Util.h"
#include <fstream>

Util::Util()
{
    //ctor
}

int Util::cadastrarImovel(Imovel imovel){
    std::ofstream salvar;
    salvar.open("imovel.txt", std::ios::app);
    salvar<<imovel.getEndereco().getBairro() << "\n";
    salvar<<imovel.getEndereco().getCep() << "\n";
    salvar<<imovel.getEndereco().getCidade() << "\n";
    salvar<<imovel.getEndereco().getLogradouro() << "\n";
    salvar<<imovel.getEndereco().getNumero() << "\n";
    salvar<<imovel.getDescricao() << "\n";
    salvar<<imovel.getImovelTipo() << "\n";
    salvar<<imovel.getTipoDeferta() << "\n";
    salvar<<imovel.getValor() << "\n";
    return 1;
    salvar.close();
}

Imovel* Util::listarImovel(){
}

Imovel* Util::listarPorTipo(int tipo){
}

Imovel* Util::listarPorCategoria(int categoria){
}

Imovel* Util::buscarImovel(int filtro, std::string pesquisa){
}

Imovel* Util::buscarPorValor(int filtro, float valor1, float valor2){
}

int Util::atualizarImovel(Imovel imovel[]){
}

int Util::deletarImovel(int posicao){

}

Util::~Util()
{
    //dtor
}
