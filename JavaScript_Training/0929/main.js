// jQuery로 작성

$ (
    function() {
        const sounds = $('audio')   // 오디오태그들
        const pads = $('.pads div') // pads 안에 있는 div
        const visual = $('.visual')
        const title = $('.title')
        const colors = ['red','orange','yellow','green','blue','plum']

        // 음악 재생이 끝났을 경우
        sounds.each(function(index,soundFile) {
            soundFile.onended = function() {
                visual.text('')
                title.text('')
            }
        })
        // class명이 pads인 태그 안쪽의 div들에게 적용되는 함수
        pads.each(function(index,pad) {
            // pad 
            $(pad).on('click',function(){

                sounds.each(function(index,soundFile) {
                    soundFile.pause()
                })
                // 내가 클릭한 부분의 사운드
                if(sounds[index]) {
                    // 처음부터 재생함
                    sounds[index].currentTime = 0
                    sounds[index].play()
                    
                    // 파일명을 적절히 잘라서 표시
                    const strArray = 
                    sounds[index].src.split('sound/')
                    // sound/ 

                    title.text(strArray[1])
                    //strArray[0]은 뭔지 확인해보기
                }

                createBubbles(index)
            

            })
        
        
        })

        const createBubbles = function(index) {
            visual.text('')
            const bubble = $('<div></div>')
            visual.append(bubble)
            bubble.css('background', colors[index]).css('top', '300px')
            .css('animation', 'animation 2000ms linear infinite both')
        }

    }

)