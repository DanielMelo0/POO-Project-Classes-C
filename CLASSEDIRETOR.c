CLASSE DIRETOR 

internal class diretor : funcionario
{
    public int tipoDir;

    public void cadastroDiretor()
    {

        Console.WriteLine("\nQual o tipo do diretor? Digite:\n\n '1' para 'Diretor Financeiro(CFO)'\n '2' para 'Diretor de Marketing(CMO)\n '3' para 'Diretor de Operações(COO)'\n '4' para 'Diretor Executivo(CEO)'\n '5' para 'Diretor-Chefe de Tecnologia(CTO)'\n '6' para 'Diretor de TI(CIO)'\n '7' para 'Diretor de Receita(CRO)'");
        tipoDir = int.Parse(Console.ReadLine());
        if (tipoDir < 1 || tipoDir > 7)
        {
            Console.WriteLine("\nERRO! DIGITE UM NUMERO DE 1 A 7!");
        }
        else
        {
            Console.WriteLine("\n\n\tDIRETOR CADASTRADO!");
        }
    }

    public void exibirDiretor() {
        Console.WriteLine("\nNOME:{0}\nE-MAIL:{1}\nCPF:{2}\nTELEFONE:{3}\nCEP:{4}\nREGISTRO:{5}\n{6}\nCONTRATO:{7}\nSALARIO:{8}\nTIPO DE DIRETOR:{9}", nome, email, cpf, telefone, registro, dataNasc, tipoContrato, salario, tipoDir);
    }
}
