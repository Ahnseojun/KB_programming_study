using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp05_03
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
        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

            int[] array = new int[6];

            for (int i = 0; i < 6; i++)
            {
            Random random = new Random();
            int num = random.Next(1, 46);

                if (array.Contains(num) != true)
                {
                    array[i] = num;
                }
                else
                {
                    i--;
                }
               
            }

            Array.Sort(array, 0, 6);
            label1.Text = String.Join(", ", array);

        }

        private void button2_Click(object sender, EventArgs e)
        {
            label1.Text = "";
        }
    }
}
