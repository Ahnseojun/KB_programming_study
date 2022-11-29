using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp08_01
{
    public class Product : IComparable<Product>
    {
            
        public int id { get; set; }
        public string name { get; set; }
        public int price { get; set; }
        // IComparable<Product> 대신 IComparable만 적으면 
        // public int CompareTo(object other) 매개변수가 object가 됨
        // 그러면 별도의 형변환을 해줘야 함

        // CompareTo 값을 변경하면 >>> Sort의 정렬을 바꿀 수 있다
        public int CompareTo(Product other)
        {
            // 이 값이 음수, 0 , 양수냐에 따라서 정렬이 달라짐
            return id.CompareTo(other.id);
            // throw new NotImplementedException(); // 미구현 시 오류
          
        }
    }
}
