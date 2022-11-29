using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp08_02
{
    public class Timo : LoLCharacter
    {
        public override void sayHello()
        {
            System.Windows.Forms.MessageBox.Show("<^오^>");
        }

        public override void Qkey()
        {
            System.Windows.Forms.MessageBox.Show("실명다트");
        }

        public override void Wkey()
        {
            System.Windows.Forms.MessageBox.Show("신속한이동");
        }

        public override void Ekey()
        {
            System.Windows.Forms.MessageBox.Show("맹독다트");
        }

        public override void Rkey()
        {
            System.Windows.Forms.MessageBox.Show("유독성함정");
        }


        public new void Attack()
        {
            System.Windows.Forms.MessageBox.Show("하하핳");
            Qkey();
            Wkey();
            Ekey();
            Rkey();

        }

    }
}
