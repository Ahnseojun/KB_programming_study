using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloMyCSharp06_02
{
    public class GameCharacter
    {
        // 게임 캐릭터 수
        public static int Count = 0;
        
        // 해당 캐릭터 ID
        public string id { get; set; }
        // 캐릭터가 생성될 때 마다 캐릭터의 수는 중가
        // 캐릭터 수는 공통적으로 
        
        public GameCharacter()
        {
            Count++;
        }

    }
}
