using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharpo01
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //sysout = cw
            // cw 누르고 tab 두 번
            Console.WriteLine("안녕");
            int num1 = 10;
            double num2 = 3.14;
            string m1 = "Hello";
            String m2 = "이것도 됨";
            char lastName = '이'; // 1글자 저장
            bool tf = true; // 자바에선 boolean
            Boolean tf2 = false; // Boolean 과 bool 둘 다 됨

            char c1 = "안녕하세요"[0];  // 첫글자 가져옴
            string s1 = "hello";       
            char c2 = s1[1];            // 알파벳 e 가져옴

            Console.WriteLine(c1);
            Console.WriteLine(s1);
            Console.WriteLine(c2);

            Console.WriteLine(10 + 20);     // 30
            Console.WriteLine("안녕" + "하세요"); //안녕하세요
            Console.WriteLine("10" + 20); //1020

            // 문자열 처리
            // 1. 더하기를 통해서 변수랑 문자열 더함
            int age = 34;
            string info = "내 나이 : " + age;

            Console.WriteLine(info);

            // 2. string.Format
            string info2 = string.Format("내 나이 : {0}", age);
            Console.WriteLine(info2);

            // 3. $ 표시
            string info3 = $"내 나이 : {age}";
            Console.WriteLine(info3);

        }
    }
}
