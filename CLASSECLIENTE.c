CLASSE CLIENTE


internal class cliente : Pessoa
{
    public int tipo;
    public string endereco;

    public void cadastroCliente()
    {
        Console.WriteLine("\nQual o tipo do cliente? Digite: \n\n '1' para 'Cliente Comum'\n '2' para 'Cliente VIP'\n '3' para 'Cliente SuperVIP'");
        tipo = int.Parse(Console.ReadLine());
        if (tipo < 1 || tipo > 3)
        {
            Console.WriteLine("\nERRO! DIGITE UM NUMERO DE 1 A 3!");
        }
        else
        {

            switch (tipo)
            {

                case 1:
                    Console.WriteLine("\nCLIENTE COMUM");
                    break;

                case 2:
                    Console.WriteLine("\nCLIENTE VIP");
                    break;

                case 3:
                    Console.WriteLine("\nCLIENTE SUPERVIP");
                    break;
            }
            Console.WriteLine("\nDigite o endereço do cliente:");
            endereco = Console.ReadLine();
        }

        Console.WriteLine("\n\n\tCLIENTE CADASTRADO!");
    }

    public void exibirCliente() {
        Console.WriteLine("\nNOME:{0}\nE-MAIL:{1}\nCPF:{2}\nTELEFONE:{3}\nTIPO DO CLIENTE:{4}\nENDEREÇO:{5}", nome, email, cpf, telefone, tipo, endereco);
    }
}


