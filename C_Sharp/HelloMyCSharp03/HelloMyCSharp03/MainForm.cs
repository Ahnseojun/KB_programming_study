using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp03
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_input_TextChanged(object sender, EventArgs e)
        {

        }

        private void button_mbox_Click(object sender, EventArgs e)
        {
            MessageBox.Show(textBox1_input.Text+"를 입력하셨습니다");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            SubForm s = new SubForm(textBox1_input.Text);
            s.Show();
        }

        private void button_show_Click(object sender, EventArgs e)
        {
            //기본 생성자를 이용하여 만듦
            SubForm s = new SubForm();
            s.Show();
        }

        private void circularButton1_Click(object sender, EventArgs e)
        {

        }
    }
}
