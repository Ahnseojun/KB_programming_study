using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp05_02
{
    public partial class Form1 : Form
    {
        public List<string> list = new List<string>();
        public Form1()
        {
            InitializeComponent();
            label4.Text = "";
            Random rand = new Random();
            

            button1.Text = rand.Next(100).ToString();
            button2.Text = rand.Next(100).ToString();
            button3.Text = rand.Next(100).ToString();
            button4.Text = rand.Next(100).ToString();

            button5.Text = button1.Text;
            button6.Text = button2.Text;
            button7.Text = button3.Text;
            button8.Text = button4.Text;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
        private void label4_Click(object sender, EventArgs e)
        {
            //라벨 4

        }

        private void button1_Click(object sender, EventArgs e)
        {
            list.Add(button1.Text);
            label4.Text = "   "; // label에 있는 텍스트를 리셋해줌
            foreach (var item in list)
            {
                label4.Text += item.ToString();
                label4.Text += "   ";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            list.Add(button2.Text);
            label4.Text = "   ";
            foreach (var item in list)
            {
                label4.Text += item.ToString();
                label4.Text += "   ";
            }

        }

        private void button3_Click(object sender, EventArgs e)
        {
            list.Add(button3.Text);
            label4.Text = "   ";
            foreach (var item in list)
            {
                label4.Text += item.ToString();
                label4.Text += "   ";
            }

        }

        private void button4_Click(object sender, EventArgs e)
        {
            list.Add(button4.Text);
            label4.Text = "   ";
            foreach (var item in list)
            {
                label4.Text += item.ToString();
                label4.Text += "   ";
            }

        }

        private void button5_Click(object sender, EventArgs e)
        {
            list.Remove(button5.Text);
            label4.Text = "   ";
            foreach (var item in list)
            {
                label4.Text += item +  "   ";
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {


            list.Remove(button6.Text);
            label4.Text = "   ";
            foreach (var item in list)
            {
                label4.Text += item + "   ";
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {

            list.Remove(button7.Text);
            label4.Text = "   ";
            foreach (var item in list)
            {
                label4.Text += item + "   ";
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {

            list.Remove(button8.Text);
            label4.Text = "   ";
            foreach (var item in list)
            {
                label4.Text += item + "   ";
            }
        }
    }
}
