using System;
using System.Globalization;
using FirstProject;
#nullable disable

namespace Course
{
    class Program
    {
        static void Main(string[] args)
        {
            Conta conta;

            Console.Write("Bem Vindo ao Banco!");
            Console.Write("Entre o número da conta: ");
            int id = int.Parse(Console.ReadLine());
            Console.Write("Entre o titular da conta: ");
            string name = Console.ReadLine();
            Console.Write("Haverá depósito inicial? (s/n) ");
            char depInicial = char.Parse(Console.ReadLine());

            if (depInicial == 's' || depInicial == 'S')
            {
                Console.Write("Entre o valor de depósito inicial: ");
                float valorDepInicial = float.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                conta = new Conta(name, id, valorDepInicial);
            }
            else
            {
                conta = new Conta(name, id);
            }
            System.Console.WriteLine("Dados da conta:");
            Console.WriteLine(conta);

            System.Console.WriteLine();
            System.Console.WriteLine("Entre um valor para depósito:");
            float quantia_Dep = float.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            conta.Deposito(quantia_Dep);
            System.Console.WriteLine("Dados da conta atualizados:");
            Console.WriteLine(conta);

            System.Console.WriteLine();
            System.Console.WriteLine("Entre um valor para saque:");
            float quantia_Saq = float.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            conta.Saque(quantia_Saq);
            System.Console.WriteLine("Dados da conta atualizados:");
            Console.WriteLine(conta);

        }

    }
}