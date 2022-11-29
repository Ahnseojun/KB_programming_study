﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp07_02
{
    internal class Tiger : Cat
    {
        //하이딩 => 강제 형변환하면 부모 클래스의 메소드 호출됨
        public new void eat()
        {
            System.Windows.Forms.MessageBox.Show($"{name} 호랑이, {age}살이에요 ");
        }

        public override void fight()
        {
            System.Windows.Forms.MessageBox.Show($"{age} 살, {name} 호랑이의 혈투");
        }



    }
}
