CLASSE FUNCIONARIO


internal class funcionario : Pessoa
{
    public string cep;
    //public int cargo;
    public int turno;
    public int registro;
    public string dataNasc;
    public string tipoContrato;
    public double salario;

    public void cadastroFuncionario()
    {
        Console.WriteLine("\nDigite o CEP do funcionário:");
        cep = Console.ReadLine();
        /*Console.WriteLine("\nQual o cargo do funcionario? Digite: \n'1' para 'Gerente'\n'2' para 'Diretor'\n");
        cargo = int.Parse(Console.ReadLine());
            if(cargo<1 || cargo>2) {
            Console.WriteLine("\nERRO! DIGITE UM NUMERO DE 1 A 2");
            }
            else {
        switch(cargo){

            case 1:
                Console.WriteLine("\nGERENTE");
                break;

            case 2:
                Console.WriteLine("\nDIRETOR");
                break;    
        }  
            }*/

        Console.WriteLine("\nQual o turno do funcionário? Digite:\n\n '1' para 'Turno do Dia'\n '2' para 'Turno da Tarde/Noite'\n '3' para 'Turno da Madrugada'\n");
        turno = int.Parse(Console.ReadLine());
        if (turno < 1 || turno > 3)
        {
            Console.WriteLine("\nERRO! DIGITE UM NUMERO DE 1 A 3!");
        }
        else
        {
            switch (turno)
            {

                case 1:
                    Console.WriteLine("\nTURNO DO DIA");
                    break;

                case 2:
                    Console.WriteLine("\nTURNO DA TARDE/NOITE");
                    break;

                case 3:
                    Console.WriteLine("\nTURNO DA MADRUGADA");
                    break;
            }
        }
        Console.WriteLine("\nDigite o registro do funcionário:");
        registro = int.Parse(Console.ReadLine());
        Console.WriteLine("\nDigite a data de nascimento do funcionário:");
        dataNasc = Console.ReadLine();
        Console.WriteLine("\nDigite o tipo de contrato do funcionário:");
        tipoContrato = Console.ReadLine();
        Console.WriteLine("\nDigite o salario do funcionário");
        salario = double.Parse(Console.ReadLine());

    }


}

