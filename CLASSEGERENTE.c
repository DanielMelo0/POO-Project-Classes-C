CLASSE GERENTE

internal class gerente : funcionario
{
    public int setor;

    public void cadastroGerente()
    {

        Console.WriteLine("\nQual o setor do gerente? Digite: \n\n '1' para 'Gerente Administrativo'\n '2' para 'Gerente de Marketing'\n '3' para 'Gerente Comercial'\n '4' para 'Gerente de Vendas'\n '5' para 'Gerente de Projetos'\n '6' para 'Gerente de Produção\n '7' para 'Gerente Financeiro'\n '8' para 'Gerente de Recursos Humanos'");
        setor = int.Parse(Console.ReadLine());
        if (setor < 1 || setor > 8)
        {
            Console.WriteLine("\nERRO! DIGITE UM NUMERO DE 1 A 8!");
        }
        else
        {
            Console.WriteLine("\n\n\tGERENTE CADASTRADO!");
        }

    }

    public void exibirGerente()//REGISTRO NASCIMENTO CONTRATO SALARIO
    {
        Console.WriteLine("\nNOME:{0}\nE-MAIL:{1}\nCPF:{2}\nTELEFONE:{3}\nCEP:{4}\nREGISTRO:{5}\n{6}\nCONTRATO:{7}\nSALARIO:{8}\nSETOR:{9}", nome, email, cpf, telefone, registro, dataNasc, tipoContrato, salario, setor);

    }

}
