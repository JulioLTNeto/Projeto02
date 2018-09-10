#include <iostream>
#include "Util.h"
#include "Apartamento.h"
#include "Imovel.h"
#include "Endereco.h"

using namespace std;

int main()
{
    Endereco ende = Endereco();
    ende.setBairro("Jardim CID Universitaria");
    ende.setCep("0099898");
    ende.setCidade("JP");
    ende.setLogradouro("Num sei");
    ende.setNumero(406);
    Util ut = Util();
    Imovel *apt = new Apartamento();

    apt->setDescricao("Desc");
    apt->setEndereco(ende);
    apt->setImovelTipo(1);
    apt->setTipoOferta(1);
    apt->setValor(66);

    cout << "Hello world!" << endl;
    ut.cadastrarImovel(*apt);
    return 0;
}
