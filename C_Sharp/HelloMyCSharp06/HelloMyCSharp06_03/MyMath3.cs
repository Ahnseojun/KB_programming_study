using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp06_03
{
    public class MyMath3
    {
        // static이 붙은 것
        // 클래스 변수, 클래스 메소드
        // 클래스명.메소드()

        public static int Power(int x)
        {
            return x * x; 
        }

        public static int Power(int x, int c=2)
        {
            int result = 1;
            for (int i = 0; i < c; i++)
            {
                result *= x;
            }
            return result;        
        }


        public static int Multi (int x, int y)
        {
            return x * y;
        }

    }
}
