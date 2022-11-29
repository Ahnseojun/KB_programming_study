using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp08_03
{
    public class Dron : IFight
    {
      

        public void attackTarget()
        {
            System.Windows.Forms.MessageBox.Show("잡자");
        }

        public void killTarget()
        {
            System.Windows.Forms.MessageBox.Show("죽일까요 마스터");
        }

        public void protectMaster(string name)
        {
            System.Windows.Forms.MessageBox.Show(name +"님을 지켜라");
        }
    }
}
