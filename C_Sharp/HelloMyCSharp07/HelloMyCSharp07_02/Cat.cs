using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp07_02
{
    internal class Cat
    {
        public string name { get; set; }
        public int age { get; set; }

        public void sleep()
        {
            System.Windows.Forms.MessageBox.Show($"{name} 고양이, 잠들 시간~ ");
        }

        public void eat()
        {
            System.Windows.Forms.MessageBox.Show($"{name} 고양이, {age}살이에요 ");
        }

        public virtual void fight()
        {
            System.Windows.Forms.MessageBox.Show($"{name} 고앙이, 싸우기");

        }

    }
}
