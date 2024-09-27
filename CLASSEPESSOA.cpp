internal class Pessoa
{
    public string nome;
    public string email;
    public string cpf;
    public string telefone;

    public void cadastroPessCli()
    {
        Console.WriteLine("\nDigite o nome do cliente à ser cadastrado:");
        nome = Console.ReadLine();
        Console.WriteLine("\nDigite o e-mail do cliente à ser cadastrado:");
        email = Console.ReadLine();
        Console.WriteLine("\nDigite o CPF do cliente à ser cadastrado:");
        cpf = Console.ReadLine();
        Console.WriteLine("\nDigite o telefone do cliente à ser cadastrado:");
        telefone = Console.ReadLine();

    }

    public void cadastroPessFunc() {

        Console.WriteLine("\nDigite o nome do funcionário à ser cadastrado:");
        nome = Console.ReadLine();
        Console.WriteLine("\nDigite o e-mail do funcionário à ser cadastrado:");
        email = Console.ReadLine();
        Console.WriteLine("\nDigite o CPF do funcionário à ser cadastrado:");
        cpf = Console.ReadLine();
        Console.WriteLine("\nDigite o telefone do funcionário à ser cadastrado:");
        telefone = Console.ReadLine();
    }
}

