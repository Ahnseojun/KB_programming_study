using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp02_03_GUI
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("안녕하세요");
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
      
        private void button2_Click_1(object sender, EventArgs e)
        {
            string info = "내 이름은 " + textBox1.Text + "입니다.";
            MessageBox.Show(info);
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            int result = Convert.ToInt32(textBox2.Text) + Convert.ToInt32(textBox3.Text);
            MessageBox.Show(Convert.ToString(result));
        }

        private void button4_Click(object sender, EventArgs e)
        {
            int result = Convert.ToInt32(textBox2.Text) - Convert.ToInt32(textBox3.Text);
            MessageBox.Show(Convert.ToString(result));
        }

        private void button5_Click(object sender, EventArgs e)
        {
            int result = Convert.ToInt32(textBox2.Text) * Convert.ToInt32(textBox3.Text);
            MessageBox.Show(Convert.ToString(result));
        }

        private void button6_Click(object sender, EventArgs e)
        {
            int result = Convert.ToInt32(textBox2.Text) / Convert.ToInt32(textBox3.Text);
            MessageBox.Show(Convert.ToString(result));
        }

        private void button7_Click(object sender, EventArgs e)
        {
            int result = Convert.ToInt32(textBox2.Text) % Convert.ToInt32(textBox3.Text);
            MessageBox.Show(Convert.ToString(result));
        }
    }
}
