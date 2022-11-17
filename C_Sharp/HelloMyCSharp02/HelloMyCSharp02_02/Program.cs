using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp02_02
{
    internal class Program
    {
        static void Main(string[] args)
        {   
            //구조체로 만듦
            //b1과 b2는 동명이인. 따라서 잔액 다름
            BKBank b1 = new BKBank();
            b1.Name = "박재형";
            b1.Balance = 1000000;

            BKBank b2 = b1;
            b2.Balance = 0;

            b1.info();
            b2.info();

            Console.WriteLine("--------------------");

            KBBank kb1 = new KBBank();
            kb1.Name = "박지호";
            kb1.Balance = 5000000;

            KBBank kb2 = (KBBank)kb1.Clone();
            kb2.Balance = 0;

            kb1.info(); 
            kb2.info();

            Console.WriteLine("--------------------");


            KyungBookBank kbb1 = new KyungBookBank("조영탁");
            kbb1.Balance = 5000;
            KyungBookBank kbb2 = new KyungBookBank(kbb1.Name);
            kbb2.Balance = 0;

            kbb1.info();
            kbb2.info();

            kbb1.Saving(10000);
            kbb1.info(); // 만원 저축했으니 15000

            kbb2.Withdrawal(5000);
            kbb2.info(); // 마이너스 통장

            Console.WriteLine("--------------------");








        }
    }
}
