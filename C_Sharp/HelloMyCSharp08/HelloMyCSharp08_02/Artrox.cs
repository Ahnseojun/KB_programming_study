using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp08_02
{
    public class Artrox : LoLCharacter
    {
        public override void Qkey()
        {
            Console.WriteLine("덤벼라!");
        }

        public override void Wkey()
        {
            Console.WriteLine("따~@");
        }
        public override void Ekey()
        {
            base.Ekey();
        }
        public override void Rkey()
        {
            base.Rkey();
        }

        public override void sayHello()
        {
            Console.WriteLine("아트록스 노맛");
        }

    }
}
