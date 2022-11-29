using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp06_03
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
            MyMath myMath = new MyMath();

            label1.Text = myMath.Power(int.Parse(textBox1.Text)).ToString();

        }

        private void button2_Click(object sender, EventArgs e)
        {

            MyMath myMath = new MyMath();

            label2.Text = myMath.Power(int.Parse(textBox2.Text) , int.Parse(textBox3.Text) ).ToString();

        }

        private void button3_Click(object sender, EventArgs e)
        {
            MyMath myMath = new MyMath();

            label3.Text = myMath.Multi(int.Parse(textBox2.Text), int.Parse(textBox3.Text)).ToString();
        }


        private void button4_Click(object sender, EventArgs e)
        {
            label1.Text = MyMath2.Power(int.Parse(textBox1.Text)).ToString();
        }


        private void button5_Click(object sender, EventArgs e)
        {
            label2.Text = MyMath2.Multi(int.Parse(textBox2.Text), int.Parse(textBox3.Text)).ToString();
        }
        private void button6_Click(object sender, EventArgs e)
        {
            label3.Text = MyMath2.Power(int.Parse(textBox2.Text), int.Parse(textBox3.Text)).ToString();
        }
    }
}
