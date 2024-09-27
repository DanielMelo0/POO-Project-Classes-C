internal class Program
{
    static void Main(string[] args)
    {
        int couf;
        int goud;

        Pessoa p1 = new Pessoa();
        cliente pc = new cliente();
        funcionario pf = new funcionario();
        gerente pg = new gerente();
        diretor pd = new diretor();

        Console.WriteLine("\tCADASTRO");
        Console.WriteLine("\nVocê quer cadastrar um funcionário ou um cliente? Digite:\n\n '1' para 'Funcionário'\n '2' para 'Cliente' ");
        couf = int.Parse(Console.ReadLine());
        if (couf < 1 || couf > 2) {
            Console.WriteLine("\nERRO! DIGITE UM NUMERO DE 1 A 2!");
        }
        switch (couf)
        {

            case 1:

                p1.cadastroPessFunc();
                pf.cadastroFuncionario();
                Console.WriteLine("\nO funcionário é um gerente ou diretor? Digite:\n\n '1' para 'Gerente'\n '2' para 'Diretor'");
                goud = int.Parse(Console.ReadLine());
                if (goud < 1 || goud > 2)
                {

                    Console.WriteLine("\nERRO! DIGITE UM NUMERO DE 1 A 2!");
                }
                else
                {
                    if (goud == 1)
                    {
                        pg.cadastroGerente();
                        pg.exibirGerente();

                    }
                    else
                    {
                        pd.cadastroDiretor();
                        pd.exibirDiretor();
                    }
                }
                break;

            case 2:

                p1.cadastroPessCli();
                pc.cadastroCliente();
                pc.exibirCliente();

                break;
        }

        Console.ReadKey();
    }
}
