using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp02_01
{
    public class KBStudent
    {
        public string Name;
        public double Eye;
        public int Age;
        public string MBTI;

        // 구조체 안에 매소드 가능
        public void introduce()
        {
            Console.WriteLine("이름 : " + Name);
            Console.WriteLine("시력 : " + Eye);
            Console.WriteLine("나이 : " + Age);
            Console.WriteLine("MBTI : " + this.MBTI);

        }
    }
}
