#include <iostream>
#include "Apartamento.h"
#include "Imovel.h"
#include "SistemaImobiliaria.h"
#include "Endereco.h"
#include <list>

using namespace std;

int main()
{
    Endereco ende = Endereco();
    ende.setBairro("Jardim CID Universitaria");
    ende.setCep("0099898");
    ende.setCidade("JP");
    ende.setLogradouro("Num sei");
    ende.setNumero(406);
    SistemaImobiliaria ut = SistemaImobiliaria();
    Apartamento a = Apartamento();
    Imovel *apt = new Apartamento();

    a.setEndereco(ende);
    a.setImovelTipo(1);
    a.setTipoOferta(1);
    a.setValor(40);
    a.setValorCondominio(88);
    a.setArea(66);
    a.setVagasGaragem(6);
    a.setNumDeQuartos(6);
    a.setPosicao("SUL");
    a.setDescricao();

    *apt = a;

    cout << "Hello world!" << endl;
    //ut.getGerenciadorPersistencia().salvarImovel(apt);
    list<Imovel*> lista = ut.getGerenciadorPersistencia().recuperaListaImoveis();
    for(Imovel* im:lista){
        cout<<im->getDescricao() << "\n" <<endl;
    }
    return 0;
}
