using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp08_02
{
    public class LoLCharacter : GameCharacter, IRpgCharacter, IRts
    {
        public int Level { get; set; }

        public virtual void Qkey() { Console.WriteLine("QQ"); }
        public virtual void Wkey() { Console.WriteLine("WW"); }
        public virtual void Ekey() { Console.WriteLine("EE"); }
        public virtual void Rkey() { Console.WriteLine("RR"); }


        public void Attack()
        {
            Qkey();  
            Wkey();  
            Ekey();  
            Rkey();  
        }

        public void MoveDown()
        {
            Console.WriteLine("아래로 간다");
        }

        public void MoveLeft()
        {
            Console.WriteLine("왼쪽으로 간다");
        }

        public void MoveRight()
        {
            Console.WriteLine("오른쪽으로 간다");
        }

        public void MoveUp()
        {
            Console.WriteLine("위로 간다");
        }

        public override void sayHello()
        {
            Console.WriteLine("15 ㄱㄱ");
        }
    }
}
