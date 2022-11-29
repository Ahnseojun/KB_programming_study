using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp08_03
{
    public class RobootPet : ICharming, IFight
    {
        public string codeNum { get; set; }

        public void actCut()
        {
            System.Windows.Forms.MessageBox.Show("휴먼 반갑다");
        }

        public void attackTarget()
        {
            System.Windows.Forms.MessageBox.Show("투항하십쇼 휴먼");
        }

        public void killTarget()
        {
            System.Windows.Forms.MessageBox.Show("인간시대의 끝이 도래했다");
        }

        public void protectMaster(string name)
        {
            System.Windows.Forms.MessageBox.Show(name + "님을 지켜라");
        }

        public void smile()
        {
            System.Windows.Forms.MessageBox.Show("^^");
        }

        public void welCome()
        {
            System.Windows.Forms.MessageBox.Show("반갑다 휴먼");
        }
    }
}
