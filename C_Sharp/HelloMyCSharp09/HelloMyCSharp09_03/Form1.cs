using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp09_03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            // 추가
            studentBindingSource.Add(new Student() { name=textBox1.Text, hakbeon=textBox2.Text, gender=textBox3.Text});
        }

        private void button2_Click(object sender, EventArgs e)
        {
            // 수정
            // 이름으로 찾아서 나머지 값들 수정
            // textbox1의 값을 기준으로 찾겠다
            string name = textBox1.Text;
            
            for (int i = 0; i < studentBindingSource.Count; i++)
            {
                Student s = studentBindingSource[i] as Student;
                if (s.name == name)
                {
                    s.hakbeon = textBox2.Text;
                    s.gender = textBox3.Text;
                    studentBindingSource[i] = s;
                }
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            string name = textBox1.Text;

            for (int i = studentBindingSource.Count - 1; i >= 0; i--)
            {
                Student s = studentBindingSource[i] as Student;
                if (s.name == name)
                {

                    studentBindingSource.RemoveAt(i);
                }
            }


        }

        private void button4_Click(object sender, EventArgs e)
        {
            //이름으로 찾기

            string name = textBox1.Text;
            List<Student> ss = new List<Student>();


            for (int i = 0; i < studentBindingSource.Count; i++)
            {
                Student s = studentBindingSource[i] as Student;
                if (s.name == name)
                {
                    ss.Add(s);
                }
            }
            dataGridView2.DataSource = null;
            dataGridView2.DataSource = ss;

        }
    }
}