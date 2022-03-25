// Analise
//
// Calcular a classificação dos times a partir dos resultados dos jogos.
//
// ...


// Definição de tipos de dados
//
// nome do time -> string
// número de gols -> int
//
// ...

struct Resultado {
    //
};

struct Desempenho {
    //
};

// ...
vector<Desempenho> calcula_classificao(vector<Resultado> resultados)
{
    vector<string> times = encontra_nome_times(resultados);

    vector<Desempenho> tabela = {};
    for (string time: times) {
        Desempenho d = calcula_desempenho(time, resultados);
        tabela.push_back(d);
    }

    return classifica_times(tabela);
}

examples {
    Resultado r1 = {..};
    Resultado r2 = {..};
    Resultado r3 = {..};
    check_expect(calcula_classificao({r1, r2, r3}), (vector<Desempenho> {{..}, {..}}))
}

int main()
{
     vector<Resultado> resultados = le_resultados() ;

     vector<Desempenho> tabela = calcula_classificao(resultados);

     escreve_classificacoes(tabela);
}
