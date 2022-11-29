using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp06_02
{
    public partial class Form1 : Form
    {
        public List<GameCharacter> gamers = new List<GameCharacter>();

        public Form1()
        {
            InitializeComponent();
            List<Student> students = new List<Student>();

            students.Add(new Student() { name="일동준", grade= 1}  );
            students.Add(new Student() { name="이동준", grade= 2}  );
            students.Add(new Student() { name="삼동준", grade= 3}  );
            students.Add(new Student() { name="사동준", grade= 4}  );
            students.Add(new Student() { name="오동준", grade= 1}  );
            students.Add(new Student() { name="육동준", grade= 2}  );


            for (int i = 0; i < students.Count; i++)
            {
                Label label = new Label();
                label.Text = $"{students[i].grade}학년 {students[i].name}학생";
                label.AutoSize = true;
                label.Location = new Point(13, 13 + (23 + 3) * i);
                Controls.Add(label);   

            }

            for (int i = students.Count-1; i >= 0; i--)
            {
                if (students[i].grade > 1)
                {
                    students.RemoveAt(i);
                }

            }

            for (int i = 0; i < students.Count; i++)
            {
                Label label = new Label();
                label.Text = $"{students[i].grade}학년 {students[i].name}학생";
                label.AutoSize = true;
                label.Location = new Point(130, 13 + (23 + 3) * i);
                Controls.Add(label);
            }


        }

        private void button1_Click(object sender, EventArgs e)
        {
            GameCharacter g = new GameCharacter();
            g.id = textBox1.Text;
            gamers.Add(g); // 게임 캐릭터 리스트에 추가

            string gamerlist = "";
            foreach (var item in gamers)    
            {
                gamerlist += item.id + Environment.NewLine;
            }
            MessageBox.Show(gamerlist);
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("이 게임의 총 유저 수 : " + GameCharacter.Count);
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
