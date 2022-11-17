using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp03_04
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

        private void button2_Click(object sender, EventArgs e)
        {
            Dispose();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string id = textBox1.Text;
            string pw = textBox2.Text;

            if (id == "admin" && pw == "1234")
                MessageBox.Show("관리자님 ^0^");
            if (id.Equals("admin") && pw.Equals("1234"))
                MessageBox.Show("관리자님 ㅎㅇ");
        }

        private void label5_Click(object sender, EventArgs e)
        {
            Hide();
            // Form2 만듦과 동시에 띄운다
            // 만들 대 2개의 string 값도 같이 보냄
            new Form2(textBox1.Text, textBox2.Text).ShowDialog();
            Show();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
