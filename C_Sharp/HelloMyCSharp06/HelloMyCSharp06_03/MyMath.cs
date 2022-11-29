using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp06_03
{
    public  class MyMath
    {

        public int Power(int x)
        {
            return x * x; 
        }

        public int Power(int x, int c)
        {
            int sum = 1;
            for(int i= 0; i<c;i++)
            {
                sum *= x;
            }
            return sum;
        }

        public int Multi (int x, int y)
        {
            return x * y;
        }

    }
}
