using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp09_01
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Notifier n = new Notifier();
            ISubject s = new Notifier();

            s.register(new Observer1() { name = "스타1" });
            s.register(new Observer2());

            IObserver o1 = new Observer1();
            (o1 as Observer1).name = "허영무의 옵저버";
            s.register(o1);
            s.notify("스타크래프트");

            s.notify(",스2");


        }
    }
}
