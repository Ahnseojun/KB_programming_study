using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp07_03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void sleep_and_eat(Animal a)
        {
            a.sleep();
            a.eat();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            // 추상클래스 단독으로 인스턴스 만들지 못함
            // Animal a = new Animal()
            Animal a = new Dog();
            a.name = "도지";
            a.age = 12;
            a.sleep();
            a.eat();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Animal b = new Cat() { name="야옹카이", age=4};
            b.sleep();
            b.eat();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            sleep_and_eat(new Cat() { name = "냥냥이", age = 3 });
            sleep_and_eat(new Dog() { name = "진도지", age = 5 });
        }

        private void button4_Click(object sender, EventArgs e)
        {
            List<Animal> animals = new List<Animal>();
            animals.Add(new Cat() { name = "고앵이", age = 14 });
            animals.Add(new Dog() { name = "멍뭉이", age = 44 });
            animals.Add(new Cat() { name = "캣캣캣", age = 4 });

            foreach (var item in animals)
            {
                sleep_and_eat(item);
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            /*
            List <Animal> animals2 = new List<Animal>();
            animals2.Add(new Cat() { name = "카와이 ", age = 29 });
            animals2.Add(new Cat() { name = "유미 ", age = 129 });

            foreach (var item in animals2)
            {
                sleep_and_eat(item);
            }
            */
            sleep_and_eat(new yumi() { name = "유미는0 그런거 몰라", age = 20 });

        }
    }
}
