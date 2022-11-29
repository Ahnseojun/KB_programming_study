using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp06_05
{
    internal class Product
    {
        public string Name { get; set; }
        public int Price { get; set; }  

        // 기본 생성자  / 비어 있으면 아무것도 하지 않음
        // 생성자 또한 오버로딩 된다

        public Product()
        {
        }

        public Product (string name)
        {
            Name = name;
        }
        public Product(int price)
        {
           this.Price = price; 
        }

        public Product(string name, int price) 
        {
            this.Name = name;
            this.Price = price;
        }








    }
}
