using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp03_02
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "admin" && textBox2.Text =="1234")
            {
                MessageBox.Show("관리자님 환영합니다^^");
            }
            if(textBox1.Text == null || textBox2.Text == null)
            {
                MessageBox.Show("아이디 / 비밀번호가 비었습니다");
                return;
            }
          
        }


    }
}
