using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp08_03
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

        private void button1_Click(object sender, EventArgs e)
        {
            Dron d1 = new Dron();

            d1.protectMaster("주인");
            d1.attackTarget();

            ICharming pet1 = new Dog();
            ICharming pet2 = new RobootPet();

            pet1.actCut();
            pet2.actCut();

        }

        void cute_smile_wel(ICharming c)
        {
            c.actCut();
            c.smile();
            c.welCome();
        }

        void fightForMe(IFight f, string m)
        {
            f.attackTarget();
            f.killTarget();
            f.protectMaster(m);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            cute_smile_wel(new Dog());
            cute_smile_wel(new RobootPet());
        }

        private void button3_Click(object sender, EventArgs e)
        {
            // IFight를 구현하는 클래스만 들어갈 수 있다
            List<IFight> fighters = new List<IFight>();
            fighters.Add(new RobootPet());
            fighters.Add(new Dron());

            foreach (var item in fighters)
            {
                fightForMe(item, textBox1.Text);
            }


        }

        private void button4_Click(object sender, EventArgs e)
        {
            Android a = new Android();
            // 다형성에 의해서 오른쪽은 인스턴스 (해당 인터페이스 구현)
            // 왼쪽은 인터페이스

            IMyRobot i = new Android();
            IFight f = new Android();
            ICharming c = new Android();

            a.printMessage("a = ㅎㅇㅎㅇㅎㅇ");
            a.actCut();
            a.smile();
            a.welCome();
            a.attackTarget();
            a.killTarget();
            a.protectMaster("주인");


            i.printMessage("i = ㅎㅇㅎㅇㅎㅇ");
            i.actCut();
            i.smile();
            i.welCome();
            i.attackTarget();
            i.killTarget();
            i.protectMaster("주인");


            f.attackTarget();
            f.killTarget();
            f.protectMaster("주인");

            c.actCut();
            c.smile();
            c.welCome();

        }
    }
}
