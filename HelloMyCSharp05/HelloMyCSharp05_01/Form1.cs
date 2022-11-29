using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp05_01
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int[] number1 = new int[10];
            for (int i = 0; i < 10; i++) 
            {
                number1[i] = i;
            }
            foreach (var item in number1)
            {
                Console.WriteLine(item);
            }

            // 2. List = java의 ArrayList랑 똑같은 것
            List<int> number2 = new List<int>();
            for (int i = 0; i < 10; i++)
                number2.Add(i * i);
            foreach(var item in number2)
            {
                Console.WriteLine(item);
            }

            // java 의 ArrayList랑은 다르게 각 구성요소 접근 시 
            // 배열이랑 똑같이 접근함 (자바에선 get을 씀)
            for (int i = 0; i < number2.Count; i++)
            {
                Console.WriteLine(number2[i]);
            }



            // 일반 배열. 배열의 길이는 Length
            // List의 길이는 Count라고 표기
            for (int i = 0; i < number1.Length; i++)
            {
                Console.WriteLine(number1[i]);
            }

           
        }
    }
}
