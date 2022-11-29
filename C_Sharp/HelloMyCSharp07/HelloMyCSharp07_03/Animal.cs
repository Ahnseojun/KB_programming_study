using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp07_03
{
    abstract public class Animal
    {
        public string name { get; set; }
        public int age { get; set; }    
        
        public void sleep()
        {
            System.Windows.Forms.MessageBox.Show($"{name}은/는 {age}살이라서 많이 잡니다");
        }

        public abstract void eat();
    }
}
