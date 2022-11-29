using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp08_02
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            Artrox a1 = new Artrox();
            a1.name = "3대_500치는_티모";
            a1.Level = 18;

            
            Console.WriteLine($"{a1.name}는 {a1.Level}입니다");
            a1.Qkey();
            a1.Wkey();
            a1.Ekey();
            a1.Rkey();
            a1.sayHello();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Timo t = new Timo();
            t.name = "피카츄성우";
            t.Level = 18;
            t.sayHello();

            t.Attack();
        }
    }
}
