using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp07_03
{
    public class Cat : Animal
    {
        public override void eat()
        {
            System.Windows.Forms.MessageBox.Show($"{name}고양이는  {age}살 답게 잘 먹는다. 야옹~");
            // 구현하지 않았을 대 발생하는 오류
            // throw new NotImplementedException();
        }
    }
}
