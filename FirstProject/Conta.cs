using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Threading.Tasks;

namespace FirstProject
{
    public class Conta
    {
        public string _nomeConta { get; set; }
        public int _idConta { get; private set; }
        public float _saldoConta { get; private set; }


        public Conta(string name, int id){
            _nomeConta = name;
            _idConta = id;
        }
        public Conta(string name, int id, float depositoInicial) : this(name, id)  {
            Deposito(depositoInicial);
        }

        override public string ToString(){
            return "Conta "
                + _idConta
                + ", Titular "
                + _nomeConta
                + ", Saldo: $"
                + _saldoConta.ToString("F2", CultureInfo.InvariantCulture);
        }

        public string NomeConta { 
            get{ return _nomeConta;}
            set{ 
                if (value != null && value.Length > 0)
                _nomeConta = value;
            }
        }
        
        public void Deposito(float quantia_Dep){
            _saldoConta += quantia_Dep; 
        }

        public void Saque(float quantia_Saq){
            _saldoConta -= quantia_Saq + 5;
        }
    }
}