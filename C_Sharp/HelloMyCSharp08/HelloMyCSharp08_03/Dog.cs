using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp08_03
{
    // ICharming 를 상속(=추가)했다는 것은
    // ICharming에 있는 메소드들을 반드시 구현해야 함
    public class Dog : ICharming
    {
        public string name { get; set; }   
        public int age { get; set; }



        public void actCut()
        {
            System.Windows.Forms.MessageBox.Show("주인을 햝는다");
        }

        public void smile()
        {
            System.Windows.Forms.MessageBox.Show("주인을 보며 웃는다");
        }

        public void welCome()
        {
            System.Windows.Forms.MessageBox.Show("주인을 반긴다");
        }
    }
}
