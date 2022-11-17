using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp02_02
{
    //KBBank를 상속한 클래스
    //KBBank에 있는 메소드, 변수 등을 쓸 수 있음
    
    public class KyungBookBank : KBBank
    {
        // 이름값을 선언하자마자 정하는 생성자
        public KyungBookBank(string Name)
        {
            this.Name = Name;
        }
        public void Withdrawal(int money)
        {
            this.Balance -= money;
        }
        public void Saving (int money)
        {
            this.Balance += money;
        }







    }
}
