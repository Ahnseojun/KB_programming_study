using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp08_03
{
    public class Android : IMyRobot
    {

        public void actCut()
        {
            System.Windows.Forms.MessageBox.Show("actcut");
        }

        public void attackTarget()
        {
            System.Windows.Forms.MessageBox.Show("attackTarget");
        }

        public void killTarget()
        {
            System.Windows.Forms.MessageBox.Show("kill");
        }

        public void printMessage(string message)
        {
            System.Windows.Forms.MessageBox.Show(message + " message");
        }

        public void protectMaster(string name)
        {
            System.Windows.Forms.MessageBox.Show(name + " protect");
        }

        public void smile()
        {
            System.Windows.Forms.MessageBox.Show("smile");
        }

        public void welCome()
        {
            System.Windows.Forms.MessageBox.Show("welCome");
        }
    }
}
