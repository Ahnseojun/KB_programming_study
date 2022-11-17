using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //1
            Console.WriteLine("안녕하세요");

            //2
            Console.WriteLine(10+20);
            Console.WriteLine(7/3);
            Console.WriteLine(7%3);
            Console.WriteLine(7-3);
            Console.WriteLine(10*20);

            //3
            Console.WriteLine("---3---");
            Console.WriteLine("\"10\"" + 10);
            Console.WriteLine("2" + 100);
            Console.WriteLine("10" + 2);

            //4
            Console.WriteLine("내가 태어난 연도");
            int mybirth = int.Parse(Console.ReadLine());
            Console.WriteLine($"나는 {mybirth}년생 입니다");

            //5
            Console.WriteLine("키미노 나마에와?");
            String myname = Console.ReadLine();
            Console.WriteLine($"나는 {myname}입니다");

            //6
            int age = 30;
            String name = "이동준";
            Console.WriteLine("6) 나는 " + "\"" + name + "\"" + "입니다");
            Console.WriteLine("나이는 " + "\"" + age + "\"" + "대입니다");

            //7
            Console.WriteLine("내 나이는?");
            int myage = int.Parse(Console.ReadLine());
            int ageYear = DateTime.Now.Year;

            Console.WriteLine("너는 " + (ageYear - myage + 1) + "년 입니다" );

            //8
            int thisYear = DateTime.Now.Year;
            int bornYear = 1996;
            Console.WriteLine("너는 " + (thisYear-bornYear) + "살입니다");

            //9
            Console.WriteLine("9) 글자 입력ㄱ");
            string input = Console.ReadLine();

            Console.WriteLine(input[0]);

            //10
            Console.WriteLine("10) 정사각형의 변의 길이 입력ㄱㄱ");
            int round = int.Parse(Console.ReadLine());
            Console.WriteLine("정사각형의 넓이는 : " + round * round);


            //11
            Console.WriteLine("11) 숫자 입력");
            int num1 = int.Parse(Console.ReadLine());
            if(num1 < 0)
            {
                Console.WriteLine("음수");
            }

            //12
            Console.WriteLine("12) 숫자 입력");
            int num2 = int.Parse(Console.ReadLine());
            if (num2 >= 0)
            {
                Console.WriteLine("자연수");
            }
            else
            {
                Console.WriteLine("자연수 아님");
            }

            //13
            Random rand = new Random();
            int a = rand.Next(0, 3);

            switch (a)
            {
                case 0:
                    Console.WriteLine("가위");
                    break;
                case 1:
                    Console.WriteLine("바위");
                    break;
                case 2:
                    Console.WriteLine("보");
                    break;
              
            }

            //14
            Console.WriteLine("14) 0 1 2 중에 입력");
            int rps = int.Parse(Console.ReadLine());
            if(rps <0 || rps>2)
            {
                Console.WriteLine("0 ~ 2 까지만 입력");
            }
            //0 가위 1 바위 2 보

            Random rand2 = new Random();
            int b = rand.Next(0, 3);

            switch (rps)
            {
                case 0:
                    switch(b) {

                        case 0:
                            Console.WriteLine("비김");
                            break;
                        case 1:
                            Console.WriteLine("이김");
                            break;
                        case 2:
                            Console.WriteLine("짐 ㅅㄱ");
                            break;
                    }
                    break;

                case 1:
                    switch (b)
                    {

                        case 0:
                            Console.WriteLine("이김");
                            break;
                        case 1:
                            Console.WriteLine("비김");
                            break;
                        case 2:
                            Console.WriteLine("짐 ㅅㄱ");
                            break;
                    }
                    break;

                case 2:
                    switch (b)
                    {

                        case 0:
                            Console.WriteLine("짐");
                            break;
                        case 1:
                            Console.WriteLine("이김");
                            break;
                        case 2:
                            Console.WriteLine("비김");
                            break;
                    }
                    break;
            }


            //15

            Console.WriteLine("15 if문) 0 1 2 중에 입력");
            int rps2 = int.Parse(Console.ReadLine());
            if (rps2 < 0 || rps2 > 2)
            {
                Console.WriteLine("0 ~ 2 까지만 입력");
            }

            Random rand3 = new Random();
            int c = rand.Next(0, 3);

            if(rps2 == c)
            {
                Console.WriteLine("비김");
            }
            else if(rps2 - c == -1 || rps2 - c == 2)
            {
                Console.WriteLine("짐");
            }
            else
            {
                Console.WriteLine("이김");
            }


            //16
            Console.WriteLine("16번");
            for (int i = 1; i <=10; i++)
            {
                Console.WriteLine(i);
            }


            //17
            Console.WriteLine("17번");
          
            int sum17 = 1;
            for (int i = 1; i <= 10; i++)
            {
                sum17  *= i;
            }
            Console.WriteLine("1~10곱한 값 : " + sum17);

            // 18
            for (int i = 1; i <= 10; i++)
            {
                Console.WriteLine($"안녕하세요 {i}번째 손님");
            }


            //19
            Console.WriteLine("19 숫자입력");
            int num19 = int.Parse(Console.ReadLine());

            while (true)
            {
                Console.WriteLine(num19 * num19);
               
                if (num19 == 0)
                {
                    Console.WriteLine("0 입력함");
                    break;

                }
             }

            // 20-1
            Console.WriteLine("20-1)");
            int num21 = 1;

            for (int i = 1; i <= 10; i++)
            {
                if(i % 2 == 0)
                {
                    continue;
                }
                num21 *= i;
            }
            Console.WriteLine(num21);



            // 20-2
            Console.WriteLine("20-2)");
            int num20 = 1;

            for (int i = 1; i <= 10; i++)
            {

                if(i % 2 != 0)
                {
                    num20 *= i;
                }
            }
            Console.WriteLine(num20);






        }
    }
}
