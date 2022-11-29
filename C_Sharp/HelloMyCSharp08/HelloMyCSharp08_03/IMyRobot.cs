using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp08_03
{
    // 인터페이스도 상속 된다
    public interface IMyRobot : IFight, ICharming
    {
        void printMessage(string message);
    }
}
