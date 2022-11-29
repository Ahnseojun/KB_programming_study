using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloMyCSharp08_01
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            List<Product> products = new List<Product>();
            products.Add(new Product() { id = 1, price = 1000, name = "감자" });
            products.Add(new Product() { id = 3, price = 500, name = "파" });
            products.Add(new Product() { id = 2, price = 100, name = "젤리" });
            products.Add(new Product() { id = 4, price = 5000, name = "고구마" });


            // CompareTo가 정의되어 있지 않다면 products는 정렬이 안 됨
            // CompareTo가 정의되어 있으니 Sort에서는 내부적으로 CompareTo를 호출
            // 이걸 이용해서 정렬

            products.Sort(); // 상품 가격순으로 정렬됨
           //  products.Reverse();

            foreach (Product p in products)
            {
                // 내가 추한대로만 출력
                MessageBox.Show($"{p.name} = {p.price}");
            }
        
        
        }

        private void button2_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
