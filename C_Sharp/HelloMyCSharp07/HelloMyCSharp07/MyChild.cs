using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp07
{
    internal class MyChild : MyParent
    {
        public MyChild()
        {
            MyParent.money--;
        }

        public void study()
        {
            Console.WriteLine("공부하쟈~");
        }

        public void playgame()
        {
            Console.WriteLine("롤 드가자");
        }

        public void buyBitCoin(int money)
        {
            MyParent.money -= money;
            
            Console.WriteLine("남은 money : " + money);
        }
 









    }
}
