using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp07_03
{
    public class yumi : Animal
    {
        public override void eat()
        {
            System.Windows.Forms.MessageBox.Show($"{name}는 {age}살 답게 원딜에 딱 붙어있는다");
            // 구현하지 않았을 대 발생하는 오류
            // throw new NotImplementedException();
        }
    }
}
